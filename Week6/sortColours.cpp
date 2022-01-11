/*
Given an array A[] with n objects colored red white and blue, sort them inplace so that objects of the same color are adjacent with the colors in the order
red white and blue.
We will use the integers 0, 1 and 2 to represent the color red, white and blue respectively
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
    int low=0, mid=0, high=n-1;
    while(mid<=high){
        if(a[mid]==0){
            int temp = a[low];
            a[low] = a[mid];
            a[mid] = temp;
            low++;
            mid++;
        }else{
            if(a[mid]==1){
                mid++;
            }
            else{
                int temp = a[high];
                a[high] = a[mid];
                a[mid] = temp;
                high--;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}