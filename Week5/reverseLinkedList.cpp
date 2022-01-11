/*
Reverse Linked List
*/


#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
}

struct node* head=NULL;
void push(int data){
    struct node* newNode = new node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void print(){
    if(head == NULL){
        cout<<"No Linked List Present\n";
        return ;
    }
    struct node* p = head;
    while(p!=NULL){
        cout<<p->data<<" -> ";
    }
    cout<< endl;
}

void reverseLinkedList(){
    if(head==NULL){
        return;
    }
    struct node* prev=NULL;
    struct node* next=NULL;
    struct node* current=head;
    while(current!=NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int data;
        cin>>data;
        push(data);
    }
    cout<<"Original Linked List: ";
    print();
    reverseLinkedList();
    cout<<"Reversed Linked List: ";
    print();
    return 0;
}