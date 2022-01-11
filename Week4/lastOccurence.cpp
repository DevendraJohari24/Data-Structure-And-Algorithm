/* Last occurence of element in an array */
/* Binary Method + */

#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int element;
    cin >> element;

    int low=0, high = n-1;
    int last_occ = -1;
    while(low <= high){
        int mid = (low + high)/2;
         if(a[mid]==element){
             last_occ = mid;
             low = mid + 1;
         }else if(a[mid]>element){
             high = mid - 1;
         }else{
             low = mid + 1;
         }
    } 

    cout << last_occ <<endl;
    return 0;
}