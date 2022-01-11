/*
Given an array of integers a[] and integer target find the index of target if it's in the array
or return -1 if it is not in array.
*/

#include<bits/stdc++.h>
using namespace std;
int findIndex(int a[] int n, int target){
    int mid, low, high;
    low =0;
    high = n-1;
    while(low<=high){
        mid = (high + low)/2;
        if(a[mid]==target){
            return mid;
        }
        else if(a[low]<=a[mid]){
            if(target<=a[mid] && target>=a[low]){
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }
        else{
            if(target>=a[mid] && target<=a[high]){
                left = mid + 1;
            }
            else{
                high = mid - 1 ; 
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int target;
    cin >> target;
    cout<<findIndex(a, n, target);
}