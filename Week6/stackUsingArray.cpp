// Implementation of Stack Using Array

#include<bits/stdc++.h>
using namespace std;

int top = -1, capacity, Stack[10000];
void push(){
    if(top==capacity-1){
        cout<<"Stack is Overflow\n";
        return;
    }
    int data;
    cout<<"Enter the data : ";
    cin>>data;
    top++;
    Stack[top] = data;
}

void peek()
{
    if(top==-1){
        cout<<"Stack is Empty";
        return;
    }
    cout<<"Top Element is: "<<Stack[top]<<endl;
}

void pop(){
    if(top==-1){
        cout<<"Stack is Empty"<<endl;
        return;
    }
    cout<<Stack[top]<<" is Popped out."<<endl;\
    top--;
}
int main(){
    int Size;
    cin>>Size;
    capacity = Size;
    int choice=0;
    do{
        cout<<"1. Push 2. Pop 3. Peek 4. Exit"<<endl;
        cin>>choice;
        if(choice == 1) push();
        if(choice == 2) pop();
        if(choice == 3) peek();
    }while(choice!=4);


}