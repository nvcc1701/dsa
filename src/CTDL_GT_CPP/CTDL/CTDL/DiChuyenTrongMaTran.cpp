#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		int a[n+1][m+1];
		int dp[n+1][m+1];
		for(int i=0; i<=n; i++){
			for(int j=0; j<=m; j++){
				a[i][j] = 0;
				dp[i][j] = 0;
			}
		}
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				cin>>a[i][j];
			}
		}
		dp[1][1] = 1;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				if(i==1 && j==1) continue;
				dp[i][j] = dp[i-1][j] + dp[i][j-1];
			}
		}
		cout<<dp[n][m]<<endl;
	}
}
