#include<bits/stdc++.h>
using namespace std;

// contest6/bai20sorting15
int binary_Search(int arr[], int l,int r,int x){
	int mid;
	while(l<=r){
		mid = (l+r)/2;
		if(arr[mid] >= x && arr[mid-1]<x){
			return mid - 1;
		}
		if(arr[mid]<x){
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
	}
	if(mid == r){
		return r;
	}
	return -1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr + n);
		long long res = 0;
		for(int i=0;i<n-1;i++){
			int low = binary_Search(arr,i+1,n-1,arr[i]+k);
			if(low != -1){
				res += (low - i);
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}
