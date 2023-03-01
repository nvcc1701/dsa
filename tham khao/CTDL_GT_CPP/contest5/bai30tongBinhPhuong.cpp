#include<bits/stdc++.h>
using namespace std;

// contest5/bai30tongBinhPhuong

int soLuongItNhat(int n){
	int *dp = new int [n+1];
	for(int i=0;i<=n;i++){
		dp[i] = i;
	}
	for(int i=4;i<=n;i++){		// bat dau tu 4 = 2^2
		int x = int(sqrt(i));
		if(x!=sqrt(i)){
			x++;
		} 
		for(int j=1;j<=x;j++){
			if(j*j>i){
				break;
			}
			else{
				dp[i] = min(dp[i],1 + dp[i-j*j]);
			}
		}
	}
	for(int i=0;i<=n;i++){
		cout<<dp[i]<<" ";
	}
	cout<<"\n";
	return dp[n];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<soLuongItNhat(n)<<"\n";
	}
	return 0;
}

