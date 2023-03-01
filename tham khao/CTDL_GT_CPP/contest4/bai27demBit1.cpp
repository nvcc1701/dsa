#include<bits/stdc++.h>
using namespace std;

// contest4/bai27demBit1

long long doDai(long long n){		// 3 -> 1 0 1 4 -> 1 0 1 0 1 0 1
	if(n==1){
		return 1;
	}
	long long temp = doDai(n/2);
	return 2*temp+1;
}

long long res(long long n,long long l,long long r,long long L,long long R){
	if(l>R || r<L){
		return 0;
	}
	if(l>=L && r<=R){
		return n;
	}
	long long m = (l+r)/2;
	if(m>=L && m<=R){
		return res(n/2,l,m-1,L,R) + res(n/2,m+1,r,L,R) + n%2;
	}
	return res(n/2,l,m-1,L,R) + res(n/2,m+1,r,L,R);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,L,R;
		cin>>n>>L>>R;
		long long length = doDai(n);
		cout<<res(n,1,length,L,R)<<"\n";
	}
	return 0;
}

