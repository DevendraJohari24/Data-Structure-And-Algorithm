/*
Find the longest common prefix using string amongst an array of strings. If there is no common prefx return an empty string"".
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    sort(s, s+n);
    string s1, s2, result;
    s1 = s[0];
    s2 = s[n-1];
    result = "";
    if(n==0){
        cout<<result;
    }
    else{
        for(int i=0;i<s1.length() && s2.length(); i++){
            if(s1[i]==s2[i]){
                result = result + a[i];
            }
            else break;
        }
        cout<< result;
    }
    return 0;
}