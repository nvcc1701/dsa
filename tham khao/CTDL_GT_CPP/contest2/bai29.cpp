#include<bits/stdc++.h>
using namespace std;

// di chuyen trong ma tran;
int res;
int n,m;
int a[101][101];
int dx[]={1,0};
int dy[]={0,1};

void init(){
	res = 0 ;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
}

bool diDuoc(int x,int y){
	if(x>=0 && x<n && y>=0 && y<m ) return true;
	return false;
}

void Try(int x,int y){
	if(x==n-1 && y==m-1){
		res++;
		return;
	}
	for(int j=0;j<=1;j++){
		if(diDuoc(x+dx[j],y+dy[j])){
			Try(x+dx[j],y+dy[j]);
		}
	}
}

//int res(int m,int n){
//	if(m==1 || n==1){
//		return 1;
//	}
//	return res(m-1,n) + res(m,n-1);
//}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		if(n==1 || m==1){
			cout<<1<<"\n";
		}
		else{
			Try(0,0);
			cout<<res<<"\n";
		}
	}
	return 0;
}

