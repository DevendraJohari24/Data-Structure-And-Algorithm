#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n;
    cin>>n;
    string a[n];
    bool down;
    if(n==1){
        cout<<str;
    }
    else{
        int l = str.length();
        int row = 0;
        for(int i=0;i<l;i++){
            string temp;
            temp = a[row];
            a[row] = temp + a[i];
            if(row == n-1){
                down = false;
            }
            else if(row == 0){
                down = true;
            }
            if(down){
                row++;
            }
            else{
                row--;
            }
        }
        for(int i=0;i<n; i++){
            cout<<a[i];
        }
    }
    return 0;
}