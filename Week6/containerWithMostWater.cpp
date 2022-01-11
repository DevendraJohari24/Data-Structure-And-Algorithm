/*
Container having most water
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int height[n];
    for(int i=0; i<n; i++){
        cin>>height[i];
    }
    
    int left=0, right=n-1, max_area = 0;
    while(left<right){
        int h = min(height[left], height[right]);
        int b = right - left;
        max_area = max(max_area, h*b);
        if(height[left]<=height[right])
        {
            left++;
        }else{
            right--;
        }
    } 
    cout<<max_area;
    return 0;

}