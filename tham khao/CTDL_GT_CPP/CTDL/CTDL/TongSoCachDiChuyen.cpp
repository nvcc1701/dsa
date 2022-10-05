#include<bits/stdc++.h>
using namespace std;
long long m = 1e9+7;
main(){
	int t; cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		long long A[n+5] = {0}; 
		A[0] = A[1] = 1;
		for(int i=2; i<=n; i++){
			for(int j=1; j<=min(i,k); j++){
				A[i] += A[i-j];
				A[i] %= m;
			}
		}
		cout<<A[n]<<endl;
	}
}
