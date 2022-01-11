/*
Given an array of integers A[] Find the smallest positive number from the array.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int a[size];
    int i;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    // Separating the positive and negative numbers
    int no_of_neg = 0; int j=0;
    for(i=0; i<size; i++){
        if(a[i]<=0){
            no_of_neg++;
        }
        else{
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }
    int new_size = size - no_of_neg;
    for(i=0;i<new_size;i++){
        if(abs(a[i])-1<new_size && a[abs(a[i])-1]>0){
            a[abs(a[i])-1]  = -a[abs(a[i])-1];
        }
    }

    int flag=0; int smallest_num = 0;
    for(i=0;i<new_size;i++){
        if(a[i]>0){
            smallest_num = i+1;
            flag=1;
        }
    }
    if(flag==0){
        smallest_num = new_size + 1;
    }
    cout<<smallest_num;
    return 0;
}