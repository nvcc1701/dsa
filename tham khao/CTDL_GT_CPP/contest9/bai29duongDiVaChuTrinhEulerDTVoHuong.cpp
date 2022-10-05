#include<bits/stdc++.h>
using namespace std;

// contest9/bai29duongDiVaChuTrinhEulerDTVoHuong

//vector<int> vec[1005];
int a[1001][1001];
int n,m;

void init(){
	cin>>n>>m;
	memset(a,0,sizeof(a));
	int x,y;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		a[x][y] = a[y][x] = 1;
	}
}

int checkEuler(){
	int count1 = 0,count2 = 0;
	for(int u=1;u<=n;u++){
		int bac = 0;
		for(int v=1;v<=n;v++){
			bac += a[u][v];
		}
		if(bac%2 == 0){
			count1++;
		}
		else if(bac%2 == 1){
			count2++;
		}
	}
	if(count1 == n){
		return 2;
	}
	else if(count2 == 2){
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

