#include<bits/stdc++.h>
using namespace std;

// contest5/bai25conEch

long long demSoCachBuoc(int n){
	long long dp[n+1];
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	for(int i=3;i<=n;i++){
		dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
	}
	return dp[n];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<demSoCachBuoc(n)<<"\n";
	}
	return 0;
}

