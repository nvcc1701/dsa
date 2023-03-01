#include<iostream>
using namespace std;
void HienThi(long long a[], long long n) {
	cout<<"[";
	for(long long i=1;i<n; i++) cout<<a[i]<<" ";
	cout<<a[n]<<"] ";
}
void QuayLui(long long a[], long long n) {
	if(n==0) return;
	else{
		long long b[n];
		for(long long i=1;i<=n;i++) b[i]=a[i]+a[i+1];
		QuayLui(b,n-1);
		HienThi(a,n);
	}
}
int main() {
	long long T;cin>>T;
	long long n, a[10000];
	while(T--){
		cin >> n;
		for (long long i=1;i<=n;i++) cin>>a[i];
		QuayLui(a, n);
		cout<<endl;
	}
	return 0;
}
