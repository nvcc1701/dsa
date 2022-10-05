#include<bits/stdc++.h>
using namespace std;

// contest5/bai27caiTui

int OPT(int n,int v,int a[],int c[]){
	int **dp;
	dp = new int *[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = new int[v+1];
	}
	for(int i=0;i<=n;i++){
		dp[i][0] = 0;
	}
	for(int i=0;i<=v;i++){
		dp[0][i] = 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=v;j++){
			dp[i][j] = dp[i-1][j];
			if(a[i-1]<=j && (dp[i-1][j-a[i-1]] + c[i-1]>dp[i-1][j])>0){
				dp[i][j] = dp[i-1][j-a[i-1]] + c[i-1];
			}
		}
	}
	return dp[n][v];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,v;
		cin>>n>>v;
		int a[n],c[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>c[i];
		}
		cout<<OPT(n,v,a,c)<<"\n";
	}
	return 0;
}

