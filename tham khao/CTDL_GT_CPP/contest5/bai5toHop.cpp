#include<bits/stdc++.h>
using namespace std;

// contest5/bai5toHop
// C(n,k) = C(n-1,k-1) + C(n-1,k)

#define module 1000000007

long long toHop(int n,int k,long long **c){
	if(c[n][k]!=-1){
		return c[n][k];
	}
	if(k==0 || k==n){
		c[n][k] = 1;
		return c[n][k];
	}
	c[n][k] = (toHop(n-1,k-1,c)%module + toHop(n-1,k,c)%module)%module;
	return c[n][k];
}

long long res(int n,int k){
	long long **c = new long long*[n+1];
	for(int i=0;i<=n;i++){
		c[i] = new long long[k+1];
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=k;j++){
			c[i][j] = -1;
		}
	}
	long long res = toHop(n,k,c);
	for(int i=0;i<=n;i++){
		for(int j=0;j<=k;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<res(n,k)<<"\n";
	}
	return 0;
}

