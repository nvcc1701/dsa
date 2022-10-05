#include<bits/stdc++.h>
using namespace std;
int dp[105][105][105];
main(){
	int t; cin>>t;
	while(t--){
		int n, m, k;
		cin>>n>>m>>k;
		string s1, s2, s3;
		cin>>s1>>s2>>s3;
		memset(dp, 0, sizeof(dp));
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				for(int l=1; l<=k; l++){
					if(s1[i-1] == s2[j-1] && s2[j-1] == s3[l-1])
						dp[i][j][l] = dp[i-1][j-1][l-1] +1;
					else 
						dp[i][j][l] = max(dp[i-1][j][l], max(dp[i][j-1][l], dp[i][j][l-1]));
						
				}
			}
		}
		cout<<dp[n][m][k]<<endl;
	}
}
