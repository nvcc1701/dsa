#include<bits/stdc++.h>
using namespace std;

// contest5/bai10duongDiNhoNhat

int min(int a,int b,int c){
	return min(min(a,b),c);
}

int duongDiNhoNhat(int **arr,int n,int m){
	int **dp;
	dp = new int *[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = new int [m+1];
	}
	dp[0][0] = arr[0][0];
	for(int i=1;i<=n;i++){
		dp[i][0] = dp[i-1][0] + arr[i][0];
	}
	for(int i=1;i<=m;i++){
		dp[0][i] = dp[0][i-1] + arr[0][i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j] = min(dp[i-1][j-1],dp[i][j-1],dp[i-1][j]) + arr[i][j];
		}
	}
//	for(int i=0;i<=n;i++){
//		for(int j=0;j<=m;j++)
//			cout<<dp[i][j]<<" ";
		
//		cout<<"\n";
//	}
	return dp[n][m];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int **arr = new int *[n];
		for(int i=0;i<n;i++){
			arr[i] = new int[m];
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
			}
		}
		cout<<duongDiNhoNhat(arr,n-1,m-1)<<"\n";
	}
	return 0;
}
