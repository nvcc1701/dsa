#include<bits/stdc++.h>
using namespace std;

// contest7/bai25troChoiVongTron

int troChoiVongTron(int n,int m){
	if(n==1){
		return 1;
	}
	return (troChoiVongTron(n-1,m) + m)%n + 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		cout<<troChoiVongTron(n,m)<<"\n";
	}
	return 0;
}

