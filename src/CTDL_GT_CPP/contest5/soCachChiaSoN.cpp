#include<bits/stdc++.h>
using namespace std;

// soCachChiaSoN

#define modulo 1000000007

long long soCachChiaSoN(int n){
	long long **dp = new long long *[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = new long long [n+1];
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			dp[i][j] = 0;
		}
	}
	dp[0][0] = 1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=n;j++){
			if(i>j){
				dp[i][j] = dp[i-1][j];
				dp[i][j] %= modulo;
			}
			else{
				dp[i][j] = dp[i-1][j] + dp[i][j-i];
				dp[i][j] %= modulo;
			}
		}
	}
	return dp[n][n];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<soCachChiaSoN(n)<<"\n";
	}
	return 0;
}

