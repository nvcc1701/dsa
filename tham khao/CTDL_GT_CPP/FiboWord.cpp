#include<bits/stdc++.h>
long long F[93];
using namespace std;

char FiboW(int n, long long k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=F[n-2]) return FiboW(n-2,k);
	return FiboW(n-1,k-F[n-2]);
}
int main(){
	long long k;
	int t,n;
	F[0]=0;F[1]=1;
	for(int i=2;i<=92;i++) F[i] =F[i-1] +F[i-2];
	cin>>t;
	while(t--){
	
	cin >> n>>k;
	cout << FiboW(n,k)<<endl;

}
	return 0;
}
