#include<bits/stdc++.h>
using namespace std;

// contest5/bai15dayConChungDaiNhatCuaBaXau

int dayConChungDaiNhatCuaBaXau(string s1,string s2,string s3,int a,int b,int c){
	s1 = ' ' + s1;
	s2 = ' ' + s2;
	s3 = ' ' + s3;
	int ***dp = new int **[a+1];
	for(int i=0;i<=a;i++){
		dp[i] = new int *[b+1];
		for(int j=0;j<=b;j++){
			dp[i][j] = new int[c+1];
		}
	}
	for(int i=0;i<=a;i++){
		for(int j=0;j<=b;j++){
			for(int k=0;k<=c;k++){
				if(i==0 || j==0 || k==0){
					dp[i][j][k] = 0;
				}
				else if(s1[i] == s2[j] && s1[i] == s3[k]){
					dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
				}
				else{
					dp[i][j][k] = max(max(dp[i-1][j][k],dp[i][j-1][k]),dp[i][j][k-1]);
				}
			}
		}
	}
	return dp[a][b][c];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		char x;
		string s1,s2,s3;
		for(int i=0;i<a;i++){
			cin>>x;
			s1.push_back(x);
		}
		for(int i=0;i<b;i++){
			cin>>x;
			s2.push_back(x);
		}
		for(int i=0;i<c;i++){
			cin>>x;
			s3.push_back(x);
		}
		cout<<dayConChungDaiNhatCuaBaXau(s1,s2,s3,a,b,c)<<"\n";
	}
	return 0;
}

