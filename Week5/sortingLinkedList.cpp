/*
Sorting Linked List using Merge Sort.
*/

#include<bits/stdc++.h>
using namespace std;


class node{
    public:
        int data;
        node* next;
}

node* MergeDivideList(node* a, node* b){
    node* result = NULL;
    // base case
    if(a == NULL)
    {
        return b;
    }
    else if(b == NULL){
        return a;
    }

    if(a->data<=b->data){
        result = a;
        result->next = MergeDivideList(a->next, b);
    }else{
        result = b;
        result->next = MergeDivideList(a, b->next);
    }
    return result;
}

void divideList(node* source, node** front , node** back){
    node* fast;
    node* slow;

    slow = source;
    fast = source->next;

    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            slow = slow->next;
            fast = fast->next;
        }
    }
    *front = source;
    *back = slow->next;
    slow->next = NULL;

}

void MergeSort(node** tempHead){
    node* Head = tempHead;
    node* p1;
    node* p2;
    if((Head==NULL) || (Head->next==NULL)){
        return ;
    }
    divideList(Head, &p1, &p2);
    MergeSort(&p1);
    MergeSort(&p2);
    *tempHead = MergeDivideList(p1, p2);
}
void push(node** tempHead, int data){
    node* newNode = new node();
    newNode->data = data;
    newNode->next = tempHead;
    (*tempHead) = newNode;
}

void print(node* tempHead){
    if(tempHead==NULL){
        return;
    }
    while(tempHead==NULL){
        cout<<tempHead->data<<" -> ";
        tempHead=tempHead->next;
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    node* head = NULL;
    for(int i=1; i<=n; i++){
        int data;
        cin>> data;
        push(&head, data);
    }
    cout<<"Original Linked List: ";
    print(head);
    MergeSort(&head);
    cout<<"Sorted Linked List: ";
    print(head);
    return 0;
}