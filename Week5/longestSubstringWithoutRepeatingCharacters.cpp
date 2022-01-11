/*
Implementation of longest substring without repeating characters
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int max_len=0;
    int n = s.length();
    vector<int> map(256, -1); // store last index for chracters
    int l = 0;
    for(int r=0; r<n; r++){
        l = max(l , mapp[s[r]]+1);
        max_len = max(max_len, r-l+1);
        mapp[s[r]] = r;
    }
    cout<<max_len;
    return 0;
}