/*
Given an array of integers A[]. Find the maximum difference present between two elements such that larger element comes after smaller elements in the array

*/
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max_diff = arr[1] - arr[0];
    int min_element=arr[0];

    for(int i=1;i<n;i++){
        if((arr[i] - min_element)> max_diff){
            max_diff = arr[i] - min_element;
        }
        if(arr[i]<min_element){
            min_element = arr[i];
        }
    }

    cout<<"Maximum  Difference : "<<max_diff;
    return 0;

}