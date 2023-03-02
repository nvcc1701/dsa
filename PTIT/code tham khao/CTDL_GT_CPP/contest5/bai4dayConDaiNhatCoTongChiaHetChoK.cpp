#include<bits/stdc++.h>
using namespace std;

// contest5/bai4dayConDaiNhatCoTongChiaHetChoK

int dayConDaiNhatCoTongChiaHetChoK(int arr[],int n,int k){
	int s = 0;
	for(int i=0;i<n;i++){
		arr[i] %= k ;
		s += arr[i];
	}
	s %= k;
	if(s==0){
		return n;
	}
	else{
		int **dp = new int *[n+1];
		for(int i=0;i<=n;i++){
			dp[i] = new int [k];
		}
		dp[0][0] = 0;
		for(int i=1;i<k;i++){
			dp[0][i] = 99999;
		}
		for(int i=1;i<=n;i++){
			for(int j = 0;j<k;j++){
				dp[i][j] = min(dp[i-1][j],dp[i-1][(j-arr[i-1]+k)%k] + 1);
			}
		}
		return n - dp[n][s];
	}
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
		cout<<dayConDaiNhatCoTongChiaHetChoK(arr,n,k)<<"\n";
	}
	return 0;
}

