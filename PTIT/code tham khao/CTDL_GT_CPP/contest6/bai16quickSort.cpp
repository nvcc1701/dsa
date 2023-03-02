#include<bits/stdc++.h>
using namespace std;

// contest6/bai16quickSort

int partition(int arr[],int l,int r){ // tim phan tu chot 
	int pivot = arr[r]; // khoa
	int i = l -1;
	for(int j=l;j<r;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[r]);
	return i+1;
}

void quickSort(int arr[],int l,int r){
	if(l<r){
		int pivot_Index = partition(arr,l,r);
		quickSort(arr,l,pivot_Index-1);
		quickSort(arr,pivot_Index+1,r);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int *arr = new int [n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		quickSort(arr,0,n-1);
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

