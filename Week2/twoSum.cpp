/* Given an array of integers A[] and a integer sum. Find a pair in the array with the given sum. */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>sum;
    sort(a, a+n);
    int l=0, h=n-1;
    while(l<h){
        if(a[l] + a[h] == sum){
            cout<<a[l]<<" "<<a[h];
            break;
        }
        else{
            if((a[l]+a[h])>sum) {
                h--;
            }
            else{
                l++;
            }
        }
    }
    return 0;
}