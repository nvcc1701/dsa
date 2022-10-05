#include<bits/stdc++.h>
using namespace std;

// contest9/bai30chuTrinhEulerDoThiCoHuong

int n,m;
int a[1001][1001];

void init(){
	cin>>n>>m;
	memset(a,0,sizeof(a));
	int x,y;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		a[x][y] = 1;
	}
}

int checkEuler(){
	int count1 = 0;
	for(int u=1;u<=n;u++){
		int degCong = 0, degTru = 0;
		for(int v=1;v<=n;v++){
			degCong += a[u][v];
			degTru += a[v][u];
		}
		if(degCong == degTru){
			count1++;
		}
	}
	if(count1 == n){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		cout<<checkEuler()<<"\n";
	}
	return 0;
}

