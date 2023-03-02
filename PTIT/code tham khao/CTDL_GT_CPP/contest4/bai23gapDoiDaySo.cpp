#include<bits/stdc++.h>
using namespace std;

//contest4/bai23gapDoiDaySo

int timSo(int n,long long k){
	long long x = pow(2,n-1);
	if(k==x){
		return n;
	}
	else if(k<x){
		return timSo(n-1,k);
	}
	else{
		return timSo(n-1,k-x);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		cout<<timSo(n,k)<<"\n";
	}
	return 0;
}

