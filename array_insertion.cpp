#include<bits/stdc++.h>
using namespace std;
void display( int arr[] , int n){
    for( int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main() {
    int arr[20];
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int item, loc;
    cin>>item>>loc;

     n++;
    if( loc > n) {
       cout<<"overflow"<<endl;
       exit(1);

    }
    else {

  
   
    for( int i=n; i> loc; i--) {
        arr[i] = arr[i-1];
    }
     arr[loc] = item;
       }
    display(arr,n);
    
    return 0;
}

/*
1   10
2   20
3   30
4   40
5   50
6   


*/