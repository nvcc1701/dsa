#include<bits/stdc++.h>
using namespace std;

// contest5/bai1xauConChungDaiNhat

int xauConChungDaiNhat(string s1,string s2){
	int n = s1.length();		// so hang
	int m = s2.length();		// so cot
	int **dp;
	dp = new int *[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = new int[m+1];
	}
	for(int i=0;i<=n;i++){
		dp[i][0] = 0;
	}
	for(int i=0;i<=m;i++){
		dp[0][i] = 0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s1[i]==s2[j]){
				dp[i+1][j+1] = dp[i][j] + 1;
			}
			else{
				dp[i+1][j+1] = max(dp[i+1][j],dp[i][j+1]);
			}
		}
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
	return dp[n][m];
}

int main(){
	int t;
	cin>>t;
//	cin.ignore();
	while(t--){
		string s1;
		string s2;
		cin>>s1>>s2;
		cout<<xauConChungDaiNhat(s1,s2)<<"\n";
	}
	return 0;
}

