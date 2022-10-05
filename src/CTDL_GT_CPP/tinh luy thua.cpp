#include<bits/stdc++.h>
using namespace std;
int M=1e9+7;
long long LuyThua(long long x, long long y){
	if(y==0) return 1;
	long long n = LuyThua(x, y/2);
	if(y%2==0) return n*n%M;
	return x*(n*n%M)%M;
}
main(){
//	int t; 
	while(1){
		long long x, y;
		cin>>x>>y;
		if(x==0 &&y==0) break;
		cout<<LuyThua(x,y)<<endl;
	}
}
