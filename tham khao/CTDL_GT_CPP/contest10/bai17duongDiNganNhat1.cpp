#include<bits/stdc++.h>
using namespace std;

// contest10/bai17duongDiNganNhat1

#define INF 1e9

int cost[101][101];
int dist[101][101];
int n,m;
int q;
int x,y;

void FLOYD(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			dist[i][j] = cost[i][j];
		}
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(dist[i][j]> dist[i][k] + dist[k][j]){
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cout<<dist[i][j]<<" ";
			}
			cout<<"\n";
		}
		cout<<"----------------\n";
	}
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i == j){
				cost[i][j] = 0;
			}
			else{
				cost[i][j] = INF;
			}
		}
	}
	int a,b,w;
	for(int i=0;i<m;i++){
		cin>>a>>b>>w;
		cost[a][b] = cost[b][a] = w;
	}
	FLOYD();
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>x>>y;
		cout<<dist[x][y]<<"\n";
	}
	return 0;
}

