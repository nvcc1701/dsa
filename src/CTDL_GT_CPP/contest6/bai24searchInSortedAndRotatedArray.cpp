#include<bits/stdc++.h>
using namespace std;

// contest6/bai24searchInSortedAndRotatedArray

int search(int arr[],int l,int r,int x){
	if(l<=r){
		int mid = (l+r)/2;
		if(arr[mid]==x){
			return mid+1;
		}
		if(arr[l]<arr[mid]){
			if(arr[l]<=x && arr[mid]>x){
				return search(arr,l,mid-1,x);
			}
			else{
				return search(arr,mid+1,r,x);
			}
		}
		else if(x>arr[mid] && x<=arr[r]){
			return search(arr,mid+1,r,x);
		}
		else{
			return search(arr,l,mid-1,x);
		}
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
		cout<<search(arr,0,n-1,x)<<"\n";
	}
	return 0;
}

