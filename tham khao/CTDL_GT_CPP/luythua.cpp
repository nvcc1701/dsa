#include<bits/stdc++.h>
using namespace std;
int M=1e9+7;
long long LuyThua(int x, int y){
	if(y==0) return 1;
	long long n = LuyThua(x, y/2);
	if(y%2==0) return n*n%M;
	return x*(n*n%M)%M;
}
main(){
	int t; cin>>t;
	while(t--){
		long long x, y, p;
		cin>>x>>y;
		cout<<LuyThua(x,y)<<endl;
	}
}
