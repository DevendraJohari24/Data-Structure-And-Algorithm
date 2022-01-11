/*
Given a binary array find the maximum length of a contiguous subarray with equal number 0 and 1
*/

#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[i]=-1;
        }
    }

    unordered_map<int, int> map;

    int cum_sum = 0, max_len = 0;

    for(int i=0; i<n; i++){
        cum_sum = cum_sum + arr[i];
        if(cum_sum == 0){
            max_len = i + 1;
        }
        if(map.find(cum_sum)!=map.end()){
            max_len = max(max_len, i - map[cum_sum]);
        }
        else{
            map[cum_sum] = i;
        }
    }

    cout<<max_len<<endl;
    return 0;
}