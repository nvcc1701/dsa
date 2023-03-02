#include<bits/stdc++.h>
using namespace std;

// duong di dai nhat trong do thi vo huong

int n,m;
int u,v;
int a[21][21];
int res ;

void init(){
	cin>>n>>m;
//	a[n][n] = {{0}};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			a[i][j] = 0;
		}
	}
	for(int i=0;i<m;i++){
		cin>>u>>v;
		a[u][v] = 1;
		a[v][u] = 1;
	}
	res = -9999999;
}

void Try(int u,int doanDi){
	res = max(res,doanDi);
	for(int v=0;v<n;v++){
		if(a[u][v]){
			a[u][v] = 0;
			a[v][u] = 0;
			Try(v,doanDi+1);
			a[u][v] = 1;
			a[v][u] = 1;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		for(int u=0;u<n;u++){
			Try(u,0);
		}
		cout<<res<<"\n";
	}
	return 0;
}

