// Implementation of the Stack using Linked List

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* link;
}

bool isEmpty(){
    if(top==NULL){
        return true;
    }else{
        return false;
    }
}

void push(int data){
    struct node* newNode = new node;
    if(!newNode){
        cout<<"Heap Overflow\n";
        return;
    }
    newNode->data = data;
    newNode->link = top;
    top = newNode;
}

void pop(){
    if(isEmpty()){
        cout<<"Stack is Empty\n";
        exit(1);
    }
    struct node* temp = top;
    
    cout<<top->data<<" is Popped Out.\n";
    top = top->link;
    free(temp);
}

int peek(){
    if(isEmpty()){
        cout<<"Stack is Empty\n";
        exit(1);
    }
    return top->data;
}

void display(){
    if(isEmpty()){
        cout<<"Stack is Empty\n";
        exit();
    }
    struct node*p =top;
    while(p!=NULL){
        cout<<p->data<<" | ";
        p = p->link;
    }
    cout<<endl;
}

int main(){
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
}