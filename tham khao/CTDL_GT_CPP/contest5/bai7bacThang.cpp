#include<bits/stdc++.h>
using namespace std;

// contest5/bai7bacThang

#define modulo 1000000007

long long bacThang(int n,int k){
	long long *dp = new long long [n+1];	// dp[i] : so cach buoc len bac i
	for(int i=0;i<=n;i++){
		dp[i] = 0;
	}
	dp[0] = dp[1] = 1;
	dp[2] = 2;
	for(int i=3;i<=n;i++){
		for(int j=1;j<=min(i,k);j++){
			dp[i] += dp[i-j];
			dp[i] %= modulo;
		}
	}
	for(int i=0;i<=n;i++){
		cout<<dp[i]<<" ";
	}
	return dp[n];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<bacThang(n,k)<<"\n";
	}
	return 0;
}

