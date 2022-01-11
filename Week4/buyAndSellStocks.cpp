/*
You are given an array where prices[i] is the price of the given stock on the ith day. You want
to maximize your profit by choosing a single day to buy one stock and choosing a different
day in the future to sell that stock. 
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prices[n];
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }

    int min_price = INT_MAX, max_profit=0;
    for(int i=0;i<n; i++){
        if(prices[i]< min_price){
            min_price = price[i];
        }
        max_profit = max(max_profit, prices[i]-min_price);
    }
    cout<<max_profit;
    return 0;
}