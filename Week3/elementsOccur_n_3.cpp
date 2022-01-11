/*
Given an array of integers A[] of length n. Find the element occuring more than n/3 times in the given array.
*/

/* Moore's Voting Algorithm */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int count1=0, count2=0;
    int first = INT_MIN, second = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]==first){
            count1++;
        }
        else if(a[i] == second){
            count2++;
        }
        else if(count1 == 0){
            count1++;
            first=a[i];
        }
        else if(count2==0){
            count2++;
            second = a[i];
        }
        else{
            count1--;
            count2--;
        }
    }
    count1=0; 
    count2=0;
    for(int i=0;i<n;i++){
        if(a[i] == first){
            count1++;
        }
        if(a[i] == second){
            count2++;
        }
    }
    if(count1 > (n/3)){
        cout<<first<<" ";
    }else if(count2 > (n/3)){
        cout<<second<<" ";
    }else{
        cout<<-1; //No majority Element
    }

    return 0;
}