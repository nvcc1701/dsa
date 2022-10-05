#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n+5];
		long long res=0;
		long long dp[1005];
		for(int i=1; i<=n; i++)
			cin>>a[i];
		for(int i=1; i<=n; i++){
			dp[i] = a[i];
			for(int j=1; j<i; j++){
				if(a[i] > a[j]) 
					dp[i] = max(dp[i], dp[j] + a[i]);
			}
			res = max(res, dp[i]);
		}
		cout<<res<<endl;
	}
}
