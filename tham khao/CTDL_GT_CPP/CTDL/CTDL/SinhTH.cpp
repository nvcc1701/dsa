#include<bits/stdc++.h>
using namespace std;
int n, k, a[100];
void start(){
	for(int i=1; i<=k; i++){
		a[i] = i;
	}
}
void in(){
	for(int i=1; i<=k; i++){
		cout<<a[i];
	}
	cout<<' ';
}
void Try(int i){
	for(int j=a[i-1]+1; j<=n-k+i; j++){
		a[i]=j;
		if(i==k){
			in();
		}
		else Try(i+1);
	}
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		start();
		Try(1);
		cout<<endl;
	}
}
