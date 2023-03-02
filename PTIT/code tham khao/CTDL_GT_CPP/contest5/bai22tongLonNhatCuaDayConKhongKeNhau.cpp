#include<bits/stdc++.h>
using namespace std;

// comtest5/bai22tongLonNhatCuaDayConKhongKeNhau

int max(int a,int b,int c){
	return max(max(a,b),c);
}

int tongLonNhatCuaDayConKhongKeNhau(int *arr,int n){
	int *dp = new int[n];
	dp[0] = arr[0];
	dp[1] = max(dp[0],arr[1]);
	for(int i=2;i<n;i++){
		dp[i] = max(dp[i-2]+arr[i],dp[i-1],dp[i-2]);
	}
	return max(*max_element(arr,arr+n),*max_element(dp,dp+n));
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int *arr = new int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<tongLonNhatCuaDayConKhongKeNhau(arr,n)<<"\n";
	}
	return 0;
}

