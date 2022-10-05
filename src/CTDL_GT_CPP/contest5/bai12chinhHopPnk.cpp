#include<bits/stdc++.h>
using namespace std;

// contest5/bai12chinhHopPnk

#define modulo 1000000007

long long chinhHop(int n,int k){
	long long p = 1;
	for(int i=0;i<k;i++){
		p *= (n-i);
		p %= modulo;
	}
	return p;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<chinhHop(n,k)<<"\n";
	}
	return 0;
}

