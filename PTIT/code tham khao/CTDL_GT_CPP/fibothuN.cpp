#include<bits/stdc++.h>
int F[100];
using namespace std;

long long FiboW(int F[n]){
	if(n==1||n==2) return 1;
	
	return FiboW(F[n-1])+FiboW(F[n-2]);
}
int main(){
//	long long k;
	int t;
	long long n;
	F[0]=0;F[1]=1;
//	for(int i=2;i<=92;i++) F[i] =F[i-1] +F[i-2];
	cin>>t;
	while(t--){
	
	cin >> n;
	cout << FiboW(n)<<endl;

}
	return 0;
}
