#include<bits/stdc++.h>
using namespace std;

// contest5/bai16tongLonNhatCuaDayConTangDan

int tongLonNhatCuaDayConTangDan(int arr[],int n){
	int maxSum[n];
	for(int i=0;i<n;i++){
		maxSum[i] = arr[i];
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(arr[i]>arr[j]){
				if(maxSum[i]<maxSum[j] + arr[i]){
					maxSum[i] = maxSum[j] + arr[i];
				}
			}
		}
	}
//	for(int i=0;i<n;i++){
//		cout<<maxSum[i]<<" ";
//	}
//	cout<<"\n";
	return *max_element(maxSum,maxSum+n);
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
		cout<<tongLonNhatCuaDayConTangDan(arr,n)<<"\n";
	}
	return 0;
}

