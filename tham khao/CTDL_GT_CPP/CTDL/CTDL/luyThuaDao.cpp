#include<bits/stdc++.h>
using namespace std;
int m = 1e9 + 7;
long long luyThua(long long n, long long k){
	if(k==0) return 1;
	long long x=luyThua(n, k/2);
	if(k%2==0) return x*x%m;
	return n*(x*x%m)%m;
}
main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long k=0, m=n;
		while(m>0){
			k = k*10 + m%10;
			m/=10;
		}
		cout<<luyThua(n,k)<<endl;
	}
}
