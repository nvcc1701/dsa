#include<bits/stdc++.h>
using namespace std;

//contest4/bai37tinhFloorX

int binary_Search(long long arr[],int l,int r,long long x){
	if(r>=l){
		int mid = l + (r-l)/2;
		if(arr[mid] == x){
			return mid+1;
		}
		else if(arr[mid]>x){
			if(arr[mid-1]<x){
				return mid;
			}
			return binary_Search(arr,l,mid-1,x);
		}
		else {
			return binary_Search(arr,mid+1,r,x);
		}
	}
	return -1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long x;
		cin>>n>>x;
		long long arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		if(arr[0]>x){
			cout<<-1<<"\n";
		}
		else if(arr[n-1]<=x){
			cout<<arr[n-1]<<"\n";
		}
		else{
			cout<<binary_Search(arr,0,n-1,x)<<"\n";
		}
	}
	return 0;
}

