#include<bits/stdc++.h>
using namespace std;

char res[101];
int a,b;

void Try(int i,int a,int b){
	if(a == 0 && b == 0){
		for(int k=0;k<i;k++){
			cout<<res[k];
		}
		cout<<"\n";
		return;
	}
	if(i == a){
		cout<<"-1";
		return;
	}
	for(char c = '9';c>='1';c--){
		if(a-(c-'0')>=0 && (b-(c-'0')*(c-'0'))>=0){
			a -= (c-'0');
			b -= (c-'0')*(c-'0');
			res[i] = c;
			Try(i+1,a,b);
			a += (c-'0');
			b += (c-'0')*(c-'0');
		}
	}
}

void x(int a,int b){
	int **dp;
	dp = new int *[a+1];
	for(int i=0;i<=a;i++){
		dp[i] = new int [b+1];
	}
	memset(dp,0,sizeof(dp));
	for(int i=0;i<=a;i++){
		dp[i][0] = i;
	}
	for(int i=0;i<=b;i++){
		dp[0][i] = 0;
	}
	for(int i=1;i<=a;i++){
		for(int so=1;so<=9;so++){
			for(int j=1;j<=b;j++){
				if(so>i && so*so>j){
					break;
				}
				else{
					dp[i][j] = 1 + dp[i-so][j-so*so];
				}
			}
		}
	}
	for(int i=0;i<=a;i++){
		for(int j=0;j<=b;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		Try(0,a,b);
	}
	return 0;
}

