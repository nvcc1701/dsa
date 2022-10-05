#include<iostream>
using namespace std;
long long n,a[100000];
void HienThi(){
	cout<<"[";
	for(long long i=1;i<n;i++) cout<<a[i]<<" ";
	cout<<a[n]<<"]";
	cout<<endl;
}
void QuayLui(){
	if(n==0) return;
	else{
		for(long long i=1;i<=n;i++)a[i]=a[i]+a[i+1];
		n--;
		if(n>0) HienThi();
		QuayLui();
	}
}
int main(){
	int T;cin>>T;
	while(T--){
		cin>>n;
		for(long long i=1;i<=n;i++) cin>>a[i];
		HienThi();
		QuayLui();
	}
	return 0 ;
}

