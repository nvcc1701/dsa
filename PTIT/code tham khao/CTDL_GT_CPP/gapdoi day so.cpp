#include<bits/stdc++.h>
using namespace std;

long long tinh(int n,long long k){
	long long x=pow(2,n-1);
	if(k==x) return n;
	if(k<x) return tinh(n-1, k);
	return tinh(n-1,k-x);
}
main(){
	int t; cin>>t;
	while(t--){
		long long x, y;
		cin>>x>>y;
		cout<<tinh(x,y)<<endl;
	}
}
