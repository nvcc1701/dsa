#include<bits/stdc++.h>
using namespace std;
int n, a[15];
bool ok[15];
void start(){
	for(int i=1; i<= n; i++){
		a[i] = i;
	}
}
bool check(int a[]){
	for(int i=1; i<=n; i++){
		if(a[i]==(a[i+1] -1) || a[i]==(a[i+1] +1)) return false;
	}
	return true;
}
void in(){
	if(check(a)){
		for(int i=1; i<=n; i++){
			cout<<a[i];
		}
		cout<<endl;
	} 
	
}
void Try(int i){
	for(int j=1; j<=n; j++){
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
