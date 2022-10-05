#include<bits/stdc++.h>
using namespace std;
long long b[10001] = {0};
long long np(int n){
	vector<int> a;
	while(n){
		a.push_back(n%2);
		n/=2;
	}
	long long res=0;
	for(int i=a.size()-1; i>=0; i--)
		res = 10*res + a[i];
	return res;
}
void pre(int n){
	b[0]=0; b[1]=1;
	for(int i=2; i<=n; i++)
		b[i] = np(i);
}
main(){
	pre(10000);
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1; i<=n; i++)
			cout<<b[i]<<' ';
		cout<<endl;
	}
}
