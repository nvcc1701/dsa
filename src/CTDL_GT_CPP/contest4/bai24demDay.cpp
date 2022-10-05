#include<bits/stdc++.h>
using namespace std;

// contest4/bai24demDay
// n> ket qua la pow(2,n-1)
#define m 123456789

long long power(int a,long long n){
	if(n==0){
		return 1;
	}
	long long temp = power(a,n/2)%m;
	if(n%2==0){
		return (temp*temp)%m;
	}
	else{
		return ((temp*temp)%m)*a%m;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<power(2,n-1)<<"\n";
	}
	return 0;
}

