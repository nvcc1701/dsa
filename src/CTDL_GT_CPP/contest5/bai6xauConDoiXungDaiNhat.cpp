#include<bits/stdc++.h>
using namespace std;

// contest5/bai6xauConDoiXungDaiNhat

int xauConDoiXungDaiNhat(string str){
	int n = str.length();
	bool **dp = new bool *[n];
	for(int i=0;i<=n;i++){
		dp[i] = new bool [n];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			dp[i][j] = 0;
		}
	}
	for(int i=0;i<n;i++){
		dp[i][i] = 1;			// 1 phan tu luon la doi xung
	}
	int res = 1;
	for(int k=1;k<n;k++){
		for(int i=0;i<n-k;i++){
			int j = i + k ;
			if(str[i] == str[j]){
				if(k==1){
					dp[i][j] = 1;
				}
				else{
					dp[i][j] = dp[i+1][j-1];
				}
			}
			else{
				dp[i][j] = false;
			}
			if(dp[i][j]){
				res = max(res,j-i+1);
			}
		}
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<xauConDoiXungDaiNhat(str)<<"\n";
	}
	return 0;
}

