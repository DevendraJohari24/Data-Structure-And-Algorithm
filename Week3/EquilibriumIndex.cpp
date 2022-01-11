/*
Given an array integer A[] find the equilibrium index in the given array
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int sum = 0 ;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }

    int left=0 , index = -1;
    for(int i=0;i<n;i++){
        if(left == (sum - left - arr[i])){
            index = i;
            break;
        }
        else{
            left = left + arr[i];
        }
    }
    cout << "Index : "<< index;
    return 0;

}