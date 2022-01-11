// Implementation of Stack using Queue
#include<bits/stdc++.h>
using namespace std;
class Stack{
    queue<int> q1, q2;
    int current_size;
    public:
        Stack(){
            current_size = 0;
        }
        void push(int data){
            current_size = current_size + 1;
            q2.push(data);
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
            queue <int> temp;
            temp = q1;
            q1 = q2;
            q2 = temp;
        }

        void pop(){
            if(q1.empty()){
                return;
            }
            q1.pop();
            current_size = current_size - 1;
        }

        void peek(){
            if(q1.empty()){
                return;
            }
            return q1.front();
        }

        int size(){
            return current_size;
        }
}

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"Size of the Stack is : "<<s.size()<<endl;
    cout<<s.peek()<<endl;
    s.pop();
    cout<<"Size of the Stack is : "<<s.size()<<endl;
    return 0;
}