#include<bits/stdc++.h>
using namespace std;

// contest10/bai13chuTrinhAm
#define INF 1e9
struct Edge{
	int x,y,w;
};

int n,m;
Edge edges[1001];

bool chuTrinhAm(){
	int dist[n+1];
	memset(dist,INF,sizeof(dist));
	dist[1] = 0;
	for(int i=2;i<=n;i++){
		for(int j=0;j<m;j++){
			int u = edges[j].x;
			int v = edges[j].y;
			int weight = edges[j].w;
			if(dist[v] > dist[u] + weight){
				dist[v] = dist[u] + weight;
			}
		}
	}
	for(int i=0;i<m;i++){
		int u = edges[i].x;
		int v = edges[i].y;
		int weight = edges[i].w;
		if(dist[v] > dist[u] + weight){
			cout<<"u = "<<u<<"v = "<<v<<" weight = "<<weight<<"\n";
			cout<<dist[u]<<dist[v]<<"\n";
			return true;
		}
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<m;i++){
			cin>>edges[i].x>>edges[i].y>>edges[i].w;
		}
		if(chuTrinhAm()){
			cout<<"1\n";
		}
		else{
			cout<<"0\n";
		}
	}
	return 0;
}

