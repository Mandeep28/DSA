// In this program we find an elements from the array using linear search 
// the time complexity of this program is 
// best case O(1)
// average case O(n/2)
// worst case O(n)

#include<bits/stdc++.h>
using namespace std;
// this fucntion will display all the elements of the array
void display_array( int a[], int n) {
    for(int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }cout<<endl;
}
// this function weill search the elements from the array ( return -1 if not found )
int linear_search ( int a[], int n , int key) {
    for (int i=0; i<n; i++ ) {
        if(key == a[i]) {
            return i;
        }
    }
    return -1;
 }
// main funcion start 
int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }   
    cout<<"---------------------------------------"<<endl;
    display_array(a, n); 
    int key;
    cin>>key;
    int result = linear_search(a, n, key);
    cout<<result;
    cout<<endl<<"end of program"<<endl;    
    return 0;
}
// end of the main function 