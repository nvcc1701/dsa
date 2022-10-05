#include<bits/stdc++.h>
using namespace std;

// contest6/bai12kLagestElement1

void kLagestElement1(int arr[],int n,int k){
	sort(arr,arr+n);
	for(int i=0;i<k;i++){
		cout<<arr[n-1-i]<<" ";
	}
	cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int *arr = new int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		kLagestElement1(arr,n,k);
	}
	return 0;
}

