/*
Given an array of integers A[] find the subarray with maximum sum.
*/

/* Implementation of Kadane's Algorithm */

#include<limits.h>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int max_sum = INT_MIN, current_sum = 0;
    for(int i=0;i<n;i++){
        current_sum = a[i] + current_sum;
        if(current_sum > max_sum){
            max_sum = current_sum;
        }

        if(current_sum<0){
            current_sum = 0;
        }
    }

    cout<< max_sum<<" ";
    return 0;
}