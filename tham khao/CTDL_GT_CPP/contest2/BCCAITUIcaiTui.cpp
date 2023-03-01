#include<bits/stdc++.h>
using namespace std;

// BCCAITUI - Cái Túi

int caiTui(int a[],int c[],int n,int m){
	int **dp = new int *[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = new int[m+1];
	}
	for(int i=0;i<=n;i++){
		dp[i][0] = 0;
	}
	for(int i=0;i<=m;i++){
		dp[0][i] = 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j] = dp[i-1][j];
			if(a[i-1]<=j){
				dp[i][j] = max(dp[i-1][j],dp[i-1][j-a[i-1]]+c[i-1]);
			}
		}
	}
	return dp[n][m];
}

int main(){
	int n,m;
	cin>>n>>m;
	int a[n],c[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	cout<<caiTui(a,c,n,m);
	return 0;
}

