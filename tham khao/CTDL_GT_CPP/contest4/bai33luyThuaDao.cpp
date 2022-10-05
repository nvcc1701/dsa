#include<bits/stdc++.h>
using namespace std;

// contest4/bai33luyThuaDao
#define modulo 1000000007

long long daoN(long long n){
	long long r = 0;
	while(n){
		r = r*10 + n%10;
		n/=10;
	}
	return r;
}

long long pow(long long n,long long r){
	if(r==1){
		return n;
	}
	long long temp = pow(n,r/2)%modulo;
	if(r%2==0){
		return (temp*temp)%modulo;
	}
	else{
		return ((temp*temp)%modulo)*n%modulo;
	}
}


int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long r = daoN(n);
		cout<<pow(n,r)<<"\n";
	}
	return 0;
}
