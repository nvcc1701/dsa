#include<bits/stdc++.h>
using namespace std;
int  n, a[20];
bool check(){
	for(int i=1; i<=n; i++){
		if(a[1]==0 || a[n]==1) return false;
		if(a[i]==1 && a[i+1]==1) return false;
	}
	return true;
}
void in(){
	for(int i=1; i<=n; i++){
		if(a[i] == 0) cout<<'A';
		else cout<<'H';
	}
	cout<<endl;
}
void Try(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n){
			if(check()) in();
		}
		else Try(i+1);
	}
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		Try(1);
	}
}
