#include<bits/stdc++.h>
using namespace std;
int dp[105][25005];
main(){
	int w, n;
	cin>>w>>n;
	int a[n+5];
	for(int i=1; i<=n; i++)
		cin>>a[i];
	memset(dp, 0, sizeof(dp));
	for(int i=1; i<=n; i++){
		for(int j=1; j<=w; j++){
			if(j>a[i])
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-a[i]] + a[i]);
			else 
				dp[i][j] = dp[i-1][j-1];
		}
	}
	cout<<dp[n][w]<<endl;
}
