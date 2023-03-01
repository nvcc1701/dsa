#include<bits/stdc++.h>
using namespace std;

// contest5/bai20tongCacXauCon

long long tongCacXauCon(string str){
	int n = str.length();
	long long dp[n];
	dp[0] = str[0]-'0';
	long long res = dp[0];
	for(int i=1;i<n;i++){
		dp[i] = (i+1)*(str[i]-'0') + 10*dp[i-1];
		res += dp[i];
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<tongCacXauCon(str)<<"\n";
	}
	return 0;
}

