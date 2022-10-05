#include<bits/stdc++.h>
using namespace std;

// contest5/bai3dayConCoTongBangS

bool dayConCoTongBangS(int arr[],int n,int sum){
	bool **dp;
	dp = new bool *[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = new bool [sum+1];
	}
	for(int i=0;i<=n;i++){
		dp[i][0] = true;
	}
	for(int i=1;i<=sum;i++){
		dp[0][i] = false;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(arr[i-1]>j){
				dp[i][j] = dp[i-1][j];
			}
			if(arr[i-1]<=j){
				dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
			}
		}
	}
	return dp[n][sum];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,sum;
		cin>>n>>sum;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(dayConCoTongBangS(arr,n,sum)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}

