#include<bits/stdc++.h>
using namespace std;

// contest5/bai14dayConLapLaiNhieuNhat

int dayConLapLaiNhieuNhat(string str,int n){
	int **dp = new int *[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = new int [n+1];
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			dp[i][j] = 0;
		}
	}
	str = ' ' + str;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(str[i]==str[j] && i!=j){
				dp[i][j] = dp[i-1][j-1] + 1;
			}
			else{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
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
		string str;
		cin>>str;
		cout<<dayConLapLaiNhieuNhat(str,n)<<"\n";
	}
	return 0;
}

