#include<bits/stdc++.h>
using namespace std;

// conest 3/bai3:tim max
#define module 1000000007;
 
long long res(int n,int a[]){
	long long res = 0;
	for(int i=1;i<n;i++){
		res = (res+a[i]*i)%module;
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		cout<<res(n,a)<<"\n";
	}
	return 0;
}

