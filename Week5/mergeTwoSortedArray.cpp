/*
Given two sorted arrays a1[], a2[] merge these two in a single array
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int a1[n];
    for(int i=0;i<n; i++){
        cin>> a1[i];
    }
    int m;
    cin>> m;
    int a2[m];
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }
    int t = n+m;
    int merged[t];
    int i=0, j=0, k=0;
    while(i<n && j<m){
        if(a1[i]<a2[j]){
            merged[k] = a1[i];
            i++;
            k++;
        }
        else{
            merged[k] = a2[j];
            j++;
            k++;
        }
    }

    // put remaining elements of first array into merged
    while(i<n){
        merged[k] = a1[i];
        i++;
        k++;
    }
    // put remaining elements of second array into merged
    while(j<m){
        merged[k]=a2[j];
        j++;
        k++;
    }
    for(int i=0; i<t; i++){
        cout<<merged[i]<<" ";
    }
    return 0;
}