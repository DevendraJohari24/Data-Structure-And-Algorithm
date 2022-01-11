/*
Given an unsorted array of integers sort the array into a wave like array
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        if(i>0 && a[i-1]>a[i]){
            int temp;
            temp = a[i];
            a[i] = a[i-1];
            a[i-1] = temp;
        }
        if(i<n-1 && a[i]<a[i+1]){
            int temp;
            temp = a[i];
            a[i] = a[i-1];
            a[i-1] = temp;
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}