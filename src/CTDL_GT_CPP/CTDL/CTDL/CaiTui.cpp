#include<bits/stdc++.h>
using namespace std;
struct dta{
	int a=0, c=0;
};
int dp[1005][1005];
main(){
	int t; cin>>t;
	while(t--){
		int n, V;
		cin>>n>>V;
		dta tui[n+5];
		for(int i=1; i<=n; i++)
			cin>>tui[i].a;
		for(int i=1; i<=n; i++)
			cin>>tui[i].c;
		memset(dp, 0, sizeof(dp));
		for(int i=1; i<=n; i++){
			for(int j=1; j<=V; j++){
				if(j>=tui[i].a)
					dp[i][j] = max(dp[i-1][j], dp[i-1][j-tui[i].a] + tui[i].c);
				else
					dp[i][j] = dp[i-1][j];
			}
		}
		cout<<dp[n][V]<<endl;
	}
}
