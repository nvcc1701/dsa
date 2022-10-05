#include<bits/stdc++.h>
using namespace std;
int n, a[1000];
int k;
bool check(){
	for(int i=1; i<=n; i++){
		if(a[i] != a[n-i+1]) return false;
	}
	return true;
}
void in(){
	for(int i=1; i<=n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void Try(int i){
	for(int j=0;j <=1; j++){
		a[i] = j;
		if(i==n){
			if(check()) in();
		} 
		else Try(i+1);
	}
}
main(){
	cin>>n;
	Try(1);
	
}
