#include<bits/stdc++.h>
using namespace std;

// contest6/bai30sapXepKhongNhanh
// su dung megerSort

void merge(long long arr[],long long temp[],int l,int m,int r){
	int i = l;
	int j = m;
	int k = l;
	while(i<=m-1 && j<=r){
		if(arr[i]<=arr[j]){
			temp[k++] = arr[i++];
		}
		else{
			temp[k++] = arr[j++];
		}
	}
	while(i <= m-1){
		temp[k++] = arr[i++];
	}
	while(j <= r){
		temp[k++] = arr[j++];
	}
	for(int i=l;i<=r;i++){
		arr[i] = temp[i];
	}
}

void mergeSort(long long arr[],long long temp[],int l,int r){
	if(l < r){
		int m = (l+r)/2;
		mergeSort(arr,temp,l,m);
		mergeSort(arr,temp,m+1,r);
		merge(arr,temp,l,m+1,r);
	}
}

int main(){
	int n;
	cin>>n;
	long long *arr = new long long [n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	long long *temp = new long long[n];
	mergeSort(arr,temp,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

