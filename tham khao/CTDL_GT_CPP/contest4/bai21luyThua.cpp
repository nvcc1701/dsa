#include<bits/stdc++.h>
using namespace std;

//contest4/bai21luyThua
#define module 1000000007

long long power(int n,int k){
	if(k==0){
		return 1;
	}
	long long temp = power(n,k/2)%module;
	if(k%2==0){
		return (temp*temp)%module;
	}
	else{
		return ((temp*temp)%module)*n%module;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<power(n,k)<<"\n";
	}
	return 0;
}

