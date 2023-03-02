#include<bits/stdc++.h>
using namespace std;

//contest5/bai26xemPhim
//
//set<int> weight;
//
//void build(int n,int w[],int sum){
//	if(n<0) return;
//	weight.insert(sum);
//	build(n-1,w,sum);
//	build(n-1,w,sum-w[n]);
//}

int xemPhim(int n,int w[],int c){
	int **dp = new int *[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = new int[c+1];
	}
	for(int i=0;i<=n;i++){
		dp[i][0] = 0;
	}
	for(int i=0;i<=c;i++){
		dp[0][i] = 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=c;j++){
			dp[i][j] = dp[i-1][j];
			if(j>=w[i-1]){
				dp[i][j] = max(dp[i-1][j],w[i-1] + dp[i-1][j-w[i-1]]);
			}
		}
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=c;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
	return dp[n][c];
}

int main(){
	int c,n;
	cin>>c>>n;
	int w[n];
	int sum = 0;
	for(int i=0;i<n;i++){
		cin>>w[i];
	}
	cout<<xemPhim(n,w,c)<<"\n";
	return 0;
}

