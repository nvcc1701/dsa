#include<bits/stdc++.h>
using namespace std;

// contest5/bai19kyTuGiongNhau

int thoiGianNhoNhat(int n,int x,int y,int z){
	int *dp = new int [n+1];
	for(int i=0;i<=n;i++){
		dp[i] = 0;
	}
	dp[1] = x;
	for(int i=2;i<=n;i++){
		if(i%2==0){
			dp[i] = min(dp[i-1] + x,dp[i/2] + z);
		}
		else{
			dp[i] = min(dp[i-1] + x,dp[(i+1)/2] + z + y);
		}
	}
	return dp[n];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int x,y,z;
		cin>>x>>y>>z;
		cout<<thoiGianNhoNhat(n,x,y,z)<<"\n";
	}
	return 0;
}

