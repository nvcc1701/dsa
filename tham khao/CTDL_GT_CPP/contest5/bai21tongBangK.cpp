#include<bits/stdc++.h>
using namespace std;

// contest5/bai21tongBangK

#define modulo 1000000007

//long long demSoCachTongBangK(int k,int arr[],int n){
//	if(k==0){
//		return 1;
//	}
//	if(k<0 || (k>0 && n<=0)){
//		return 0;
//	}
//	return (demSoCachTongBangK(k-arr[n-1],arr,n) + demSoCachTongBangK(k,arr,n-1))%modulo;
//}

long long demSoCachTongBangK(int k,int arr[],int n){
	long long *dp = new long long [k+1];
	for(int i=0;i<=k;i++){
		dp[i] = 0;
	}
	dp[0] = 1;
	for(int i=1;i<=k;i++){
		for(int j=0;j<n;j++){
			if(i>=arr[j]){
				dp[i] += dp[i-arr[j]];
				dp[i] %= modulo;
			}
		}
	}
	return dp[k];
}

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
		cout<<demSoCachTongBangK(k,arr,n)<<"\n";
	}
	return 0;
}

