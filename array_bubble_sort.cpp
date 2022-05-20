#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i =0; i<n; i++) {
        cin>>arr[i];
    }
    // performing the bubble sort 

    int count = 0;
    while(count < n) {
        for(int i=0; i<n; i++) {
            if( arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i]= arr[i+1];
                arr[i+1] = temp;
             }
        }
        count ++;
    }
    // display the elements 
    for(int i=0; i<n; i++) {
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    
    return 0;
}