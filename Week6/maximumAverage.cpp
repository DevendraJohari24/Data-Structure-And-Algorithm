/*
Maximum Average Subarray
Given an array[]  consisting of n integers find the continuous subarray of given length k that has the maximum average value
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }
    int k;
    cin>>k;
    int i, j, sum=0;
    double max_arg = INT_MIN;
    for(i=0; i<k; i++){
        sum = sum + a[i];
    }
    max_avg = sum /k;
    i=0; j=k;
    for(j=k;j<n; j++){
        sum = sum + a[j] - a[i];
        max_avg = max(max_avg, sum/k);

    }
    cout<< max_avg;
    return 0;
}