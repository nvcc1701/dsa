#include<bits/stdc++.h>
using namespace std;

void XuLy(){
	int n, a[n+5];
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	int i=n-1;
	while(i>0 && a[i]<a[i+1]) i--;
	if(i<=0){
		for(int j=n; j>0; j--){
			cout<<j<<' ';
		}
		cout<<endl;
	}
	else{
		int m=a[i+1];
		for(int j=i+2; j<=n; j++){
			if(a[j]>a[j-1] && a[j]<a[i]) m=a[j];
		}
		for(int j=i+1; j<=n; j++){
			if(a[j]==m) swap(a[i], a[j]);
		}
		for(int k = i+1; k<n; k++){
			for(int l=k+1; l<=n; l++){
				if(a[k] < a[l]) swap(a[k], a[l]);
			}
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
