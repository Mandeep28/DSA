#include<bits/stdc++.h>
using namespace std;

// merge two sorted array
void merge(int arr[], int l, int mid, int r) {
	int n1 = mid -l+1;
	int n2 = r -mid;
	int a[n1];
	int b[n2];

	// enter elements
	for(int i=0; i<n1; i++) {
		a[i] = arr[l+i];
	}
	for(int i=0; i<n2;i++) {
			a[i] = arr[mid+1+i];
		}
		// sort the array
	int i=0, j=0, k=l;
	while(i<n1 &&j<n2) {
		if(a[i] < b[j]) {
			arr[k] = a[i];
			k++; i++;
		}
		else {
			arr[k]= a[j];
			k++; j++;
		}
		while(i<n1) {
			arr[k] = a[i];
			k++; i++;
		}
		while(j<n2){
			arr[k] = a[j];
			k++; j++;
		}
	}
	
}
void mergeSort(int arr[], int l, int r) {
	if( l < r) {
		int mid = (l+r)/2;
		mergeSort(arr, l, mid);
		mergeSort(arr, mid+1, r);

		// merge 2 sorted array 
		merge(arr, l, mid, r);
	}
}

int main(){
	int arr[5];
	cout<<"enter elememts in array:"<<endl;
	for( int i=0; i<4; i++) {
		cin>>arr[i];
	}
	mergeSort(arr, 0 , 4);
	for(int i=0; i<=4; i++) {
		cout<<arr[i] <<" ";
	}cout<<endl;
	return 0;
}
