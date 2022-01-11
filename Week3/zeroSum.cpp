/* Given an array integer A[]  find if there is subarray with zero sum.*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int, int> mp;
    int sum = 0;
    bool find_sub = false;
    for(int i=0;i<n;i++){
        sum = sum + a[i];
        if(sum == 0){
            find_sub = true;
        }
        else{
            if(mp[sum] > 0){
                find_sub = true;
            }else{
                mp[sum]++;
            }
        }
    }
    if(find_sub){
        cout<<"true";
    }
    else{
        cout<<"False";
    }
}