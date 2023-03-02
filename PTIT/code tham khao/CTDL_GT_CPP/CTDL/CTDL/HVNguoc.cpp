#include<bits/stdc++.h>
using namespace std;
int n, a[15];
bool ok[15];
void start(){
	for(int i=1; i<=n; i++){
		a[i] = n-i+1;
	}
}
void in(){
	for(int i=1; i<=n; i++){
		cout<<a[i];
	}
	cout<<' ';
}
void Try(int i){
	for(int j=n; j>0; j--){
		if(!ok[j]){
			a[i]=j;
			ok[j]=true;
			if(i==n){
				in();
			}
			else{
				Try(i+1);
			}
			ok[j]=false;
		}
	}
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		start();
		Try(1);
		cout<<endl;
	}
}
