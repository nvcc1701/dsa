#include<bits/stdc++.h>
using namespace std;

// contest6/bai22binarySearch

int binarySearch(int arr[],int l,int r,int x){
	if(l<=r){
		int mid = (l+r)/2;
		if(arr[mid] == x){
			return 1;
		}
		else if(arr[mid]>x){
			return binarySearch(arr,l,mid-1,x);
		}
		else return binarySearch(arr,mid+1,r,x);
	}
	return -1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int *arr = new int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<binarySearch(arr,0,n-1,x)<<"\n";
	}
	return 0;
}

