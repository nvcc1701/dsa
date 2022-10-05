#include<bits/stdc++.h>
using namespace std;

// contest5/bai8hinhVuongLonNhat

int min(int a,int b,int c){
	return min(min(a,b),c);
}

int hinhVuongLonNhat(int **arr,int n,int m){
	int **dp = new int *[n];
	for(int i=0;i<n;i++){
		dp[i] = new int [m];
	}
	for(int i=0;i<n;i++){
		dp[i][0] = arr[i][0];
	}
	for(int i=0;i<m;i++){
		dp[0][i] = arr[0][i];
	}
	int res = 0;
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			if(arr[i][j]){
				dp[i][j] = min(dp[i-1][j-1],dp[i-1][j],dp[i][j-1]) + 1;
			}
			else{
				dp[i][j] = 0;
			}
			res = max(res,dp[i][j]);
		}
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int **arr = new int *[n];
		for(int i=0;i<n;i++){
			arr[i] = new int[m];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
			}
		}
		cout<<hinhVuongLonNhat(arr,n,m)<<"\n";
	}
	return 0;
}

