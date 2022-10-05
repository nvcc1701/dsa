#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int s = 0;
		int *dp = new int[k];
		for(int i=0;i<k;i++){
			dp[i] = 0;
		}
		for(int i=0;i<n;i++){
			dp[arr[i]%k]++;
		}
		if(k%2==0){
			dp[k/2] /= 2;
		}
		int res = dp[0];
		for(int i=1;i<=k/2;i++){
			res += 2*min(dp[i],dp[k-i]);
		}
		cout<<res<<"\n";
	}
	return 0;
}

