#include<bits/stdc++.h>
using namespace std;

void XuLy(){
	int n;
	cin>>n;
	int a[n+5];
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	int i=n-1;
	while(i>0 && a[i]>a[i+1]) i-=1;;
	if(i<=0){
		for(int i=1; i<=n; i++)
			cout<<i<<' ';
		cout<<endl;
	}
	else{
		int k=n;
		while(a[k]<a[i]) k--;
		swap(a[k], a[i]);
		int c=i+1, d=n;
		while(c<d){
			swap(a[c], a[d]);
			c++; d--;
		}
		for(int i=1; i<=n; i++){
			cout<<a[i]<<' ';
		}
		cout<<endl;
	}
}

main(){
	int t; cin>>t;
	while(t--){
		XuLy();
	}
}
