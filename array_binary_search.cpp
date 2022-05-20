// In this program I search the elements from the array using the binary search ... 

#include<bits/stdc++.h>
using namespace std;
// function binary search ... it will return -1 if the search not found else return the index of the element at the array 
int binary_search(int arr[], int n, int key) {
    int beg = 0;
    int end = n-1;
    while (beg < end)     
    {
        int mid = (beg + end)/2;
        if(arr[mid] == key) {
            // cout<<mid;
            return mid;
        }
        else if (arr[mid] > key) 
        {
            end = mid-1;
            // cout<<end;
        }
        else {
            beg = mid -1;
            // cout<<beg;
        }
    }
    return -1;
}
void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
// start of the main 
int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<"--------------------"<<endl;
    display(arr,n);
    int key;
    cin>>key;
    // call the binary search function
    cout<<binary_search(arr, n, key)<<endl;
    
    return 0;
}