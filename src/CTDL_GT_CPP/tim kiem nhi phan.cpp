#include<bits/stdc++.h>
using namespace std;

//contest4/bai22timKiemNhiPhan

int binary_Search(int arr[],int l,int r,int x){
	if(r>=l){
		int mid = l + (r-l)/2;
		if(arr[mid] == x){
			return mid+1;
		}
		if(arr[mid]>x){
			return binary_Search(arr,l,mid-1,x);
		}
		return binary_Search(arr,mid+1,r,x);
	}
	return -1;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int index = binary_Search(arr,0,n-1,x);
		if(index==-1){
			cout<<"NO\n";
		}
		else{
			cout<<index<<"\n";
		}
	}
	return 0;
}

