/*
Given an array of integers A[] find the majority Element.
*/

/*

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    int element = a[0];
    int count=0;
    bool found_count=false;
    for(int i=0;i<n;i++){
        if(element == a[i]){
            count += 1;
            if(count > (n/2)){
                cout<<a[i];
                found_count = true;
                break;
            }
        }
        else if(element != a[i]){
            count = 1;
            element = a[i];
        }
        
    }
    if(found_count == false){
        cout<<"No Majority Element!";
    }

    return 0;
}


*/

/* Optimized Approach

        Moore's Voting Approach(Majority Element)

 */


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //Step 1 : Find the majority index or Candidate for majority element

    int maj_index = 0, count=1;
    for(int i=0;i<n;i++){
        if(a[i] == a[maj_index]){
            count++;
        }else{
            count--;
        }
        if(count==0){
            i = maj_index;
            count=1;
        }
    }
    //Verify Majority Element
    count = 0;
    for(int i=0;i<n;i++){
        if(a[i]==a[maj_index]) {
            count++;
        }
    }
    if(count>n/2){
        cout << a[maj_index];
    } 
    else {
        cout<<"No Majority Element";
    }
    return 0;
}


