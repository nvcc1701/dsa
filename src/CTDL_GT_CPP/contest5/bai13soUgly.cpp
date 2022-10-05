#include<bits/stdc++.h>
using namespace std;

// contest5/bai13soUgly

long long min(long long a,long long b,long long c){
	return min(min(a,b),c);
}

long long soUgly(int n){
	long long dp[n];
	long long p2,p3,p5;
	p2 = p3 = p5 = 0;
	long long next_Ugly=1;
	dp[0] = 1;
	for(int i=1;i<n;i++){
		next_Ugly = min(dp[p2]*2,dp[p3]*3,dp[p5]*5);
		dp[i] = next_Ugly;
		if(next_Ugly == dp[p2]*2){
			p2++;
		}
		if(next_Ugly == dp[p3]*3){
			p3++;
		}
		if(next_Ugly == dp[p5]*5){
			p5++;
		}
	}
	return next_Ugly;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<soUgly(n)<<"\n";
	}
	return 0;
}

