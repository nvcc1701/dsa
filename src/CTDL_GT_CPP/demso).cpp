#include<bits/stdc++.h>
using namespace std;

// contest4/bai40demSo0
// tim vi tri so 0 dau tien trong arr, return n-index;

int viTri0DauTien(int arr[],int l,int r){
	if(l<=r){
		int mid = l +(r-l)/2;
		if((mid==0 || arr[mid-1]==1) && arr[mid]==0 ){
			return mid;
		}
		if(arr[mid]==1){
			return viTri0DauTien(arr,mid+1,r);
		}
		else{
			return viTri0DauTien(arr,l,mid-1);
		}
	}
	return -1;
}

void demSo0(int arr[],int n){
	int index = viTri0DauTien(arr,0,n-1);
	if(index==-1){
		cout<<"0\n";
	}
	else{
		cout<<n-index<<"\n";
	}
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n,greater<int>());
		demSo0(arr,n);
	}
	return 0;
}

