#include<bits/stdc++.h>
using namespace std;

// contest5/bai28bienDoiXau

int min(int a,int b,int c){
	return min(min(a,b),c);
}

int bienDoiXau(string s1,string s2){
	int n = s1.length();
	int m = s2.length();
	s1 = ' ' + s1;
	s2 = ' ' + s2;
	int **dp = new int *[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = new int [m+1];
	}
	for(int i=0;i<=n;i++){
		dp[i][0] = i;
	}
	for(int i=0;i<=m;i++){
		dp[0][i] = i;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(s1[i] == s2[j]){
				dp[i][j] = dp[i-1][j-1];
			}
			else{
				dp[i][j] = min(dp[i][j-1],		// them
							dp[i-1][j],			// xoa
							dp[i-1][j-1]) 		// thay doi
				+ 1;
			}
		}
	}
	return dp[n][m];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1;
		string s2;
		cin>>s1>>s2;
		cout<<bienDoiXau(s1,s2)<<"\n";
	}
	return 0;
}

