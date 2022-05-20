#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    // now do the selection sort in this program 
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; i<n; i++) {
            if( arr[i] > arr[j]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // now display the sorted array 
    for( int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    return 0;
}