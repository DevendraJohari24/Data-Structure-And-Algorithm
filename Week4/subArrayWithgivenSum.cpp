/*
Given an array of integers A[] and an integer k return the total number of continuous subarrays whose sum equals to k
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
    cin>> k;
    unordered_map<int, int> mp;
    int pre_sum = 0, count = 0;
    for(int i=0; i<n; i++){
        pre_sum = pre_sum + a[i];
        if(pre_sum == k){
            count++;
        }
        int ex_sum = pre_sum-k;
        if(mp.find(ex_sum)!=mp.end()){
            count = count + mp[ex_sum];
        }
        mp[pre_sum]++;
    }
    cout<< count<<endl;
}