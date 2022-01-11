/*
Given an array a[] containing n+1 integers where each integer is between 1 and n (inclusive)
There is only one duplicate element find the duplicate element. 
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0; i<n;i++){
        cin>>a[i];
    }
    // Step 1 : Find Meeting Point
    int h, t; // h-> hare t-> tort
    h = a[0] ; t= a[0];
    do{
        t = a[t];
        h = a[a[h]];
    }while(h!=t);
    int p1 = a[0];
    int p2 = h;
    while(p1!=p2){
        p1 = a[p1];
        p2 = a[p2];
    }
    cout<<p1<<endl;
    return 0;
}