#include<bits/stdc++.h>
using namespace std;

// contest5/bai24diChuyenVeGocToaDo

//int diChuyenVeGocToaDo(int n,int m){
//	if(n==0 || m==0){
//		return 1;
//	}
//	if(n<0 || m<0){
//		return 0;
//	}
//	return diChuyenVeGocToaDo(n-1,m) + diChuyenVeGocToaDo(n,m-1);
//}

long long diChuyenVeGocToaDo(int n,int m){
	long long dp[n+1][m+1];
	for(int i=0;i<=n;i++){
		dp[i][0] = 1;
	}
	for(int i=0;i<=m;i++){
		dp[0][i] = 1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j] = dp[i-1][j] + dp[i][j-1];
		}
	}
	return dp[n][m];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		cout<<diChuyenVeGocToaDo(n,m)<<"\n";
	}
	return 0;
}

