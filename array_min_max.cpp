// mimimum and maximum value in an array 
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n; i++) {
        cin>>a[i];
    }
    int max, min;
    max = min = a[0];
    for( int i=0; i<n; i++) {
        if(max < a[i]) {
            max = a[i];
        }
        if(min > a[i]) {
            min = a[i];
        }
    }
    cout<<"max value in array is "<<max<<endl;
    cout<<"min value in array is "<<min<<endl;

    
    return 0;
}