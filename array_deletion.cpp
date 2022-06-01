#include<bits/stdc++.h>
using namespace std;
int main() {
    cout<<"program starts"<<endl;
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int loc;
    cin>>loc;
    cout<<"elements at location is"<<arr[loc]<<endl;
    for(int i = loc; i < n-1; i++) {
        cout<<"a[i+1] :"<<arr[i+1]<<"a[i] :"<<arr[i]<<endl;
        arr[i] = arr[ i+1];
    }
    n--;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}