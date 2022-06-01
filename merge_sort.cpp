#include<bits/stdc++.h>
using namespace std;


void merge(int arr[], int l, int mid, int r) {
	int n1, n2;
	n1 = mid-l+1;
	n2 = r-mid;
	int a[n1], b[n2];
	// insert elements in both arrays
	for(int i=0; i<n1; i++) {
		a[i] = arr[l+i];
	}
	for(int i=0; i<n2; i++) {
		b[i] = arr[mid+1+i];
	}
	// merge both arrays
	int i,j,k;
	i=j=0;
	k=l;
	while(i<n1 && j<n2) {
		if(a[i] <b[j]) {
			arr[k] = a[i];
			i++;
		}
		else {
			arr[k] = b[j];
			j++;
		}
		k++;
	}
	// if elements are left in the left arrary
	while(i<n1) {
		arr[k] = a[i];
			i++;
			k++;
	}
	while(j<n2) {
		arr[k] = b[j];
			j++;
			k++;
	}
}

void mergeSort(int arr[], int l, int r) {
	int mid;
	if(l<r) {
		mid = (l+r)/2;
		mergeSort(arr, l, mid);
		mergeSort(arr, mid+1, r);

		merge(arr, l, mid, r);
	}
}
void display(int arr[], int size) {
	for(int i=0; i<size; i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main() {
	int n;
	cout<<"enter total number of elements:";
	cin>>n;
	int arr[n];
	cout<<"enter elements:";
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Elements before sorting :"<<endl;
	display(arr, n);
	mergeSort(arr, 0, n-1);
	cout<<"Elements after sorting :"<<endl;
	display(arr, n);
	
	
	return 0;
}