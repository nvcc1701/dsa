#include<bits/stdc++.h>
using namespace std;
// contest5/bai29giaiMa

int giaiMa(string str){
	int n = str.length();
	int *dp = new int [n+1];
	for(int i=0;i<=n;i++){
		dp[i] = 0;
	}
	dp[0] = dp[1] = 1;
	for(int i=2;i<=n;i++){
		if(str[i-1]!='0'){
			dp[i] = dp[i-1];
		}
		if(((str[i-2] - '0')*10 + str[i-1] - '0')<=26 && ((str[i-2] - '0')*10 + str[i-1] - '0')>=10){
			dp[i] += dp[i-2];
		}
//		if(str[i-2] == '1' || (str[i-2] == '2' && str[i-1]<='6')){
//			dp[i] += dp[i-2];
//		}
	}
	return dp[n];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		if(str[0]=='0'){
			cout<<0<<"\n";
		}
		else{
			cout<<giaiMa(str)<<"\n";
		}
	}
	return 0;
}

