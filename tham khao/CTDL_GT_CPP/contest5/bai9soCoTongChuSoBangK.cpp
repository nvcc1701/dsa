#include<bits/stdc++.h>
using namespace std;

// contest5/bai9soCoTongChuSoBangK

#define modulo 1000000007

long long soCoTongChuSoBangK(int n,int k){
	long long **dp = new long long *[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = new long long [k+1];
	}
	// dp[i][j] so co i chu so co tong cac chu so bang j
	// 
	for(int i=0;i<=n;i++){
		for(int j=0;j<=k;j++){
			dp[i][j] = 0;
		}
	}
	for(int i=1;i<=9;i++){	// cac so co 1 chu so co tong bang K (K tu 1 den 9)
		dp[1][i] = 1;
	}
	
	for(int i=1;i<=n;i++){
		for(int so=0;so<=9;so++){
			for(int j=so;j<=k;j++){
				dp[i][j] += dp[i-1][j-so];
				dp[i][j] %= modulo;
			}
		}
	}
	return dp[n][k];
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<soCoTongChuSoBangK(n,k)<<"\n";
	}
	return 0;
}

