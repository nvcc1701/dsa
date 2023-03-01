#include<bits/stdc++.h>
using namespace std;

// contest10/bai15bellmanFord
#define INF 1e9
struct Edge{
	int x,y,w;
};

int n,m,st;
Edge edges[1001];

void bellmanFord(int st){
	int dist[n+1];
	for(int i=1;i<=n;i++){
		dist[i] = INF;
	}
	dist[st] = 0;
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
		if(dist[u] != INF && dist[v] > dist[u] + weight){
			cout<<"-1\n";
			return;
		}
	}
	for(int i=1;i<=n;i++){
		if(dist[i] == INF){
			cout<<"INFI"<<" ";
		}
		else{
			cout<<dist[i]<<" ";
		}
	}
	cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m>>st;
		for(int i=0;i<m;i++){
			cin>>edges[i].x>>edges[i].y>>edges[i].w;
		}
		bellmanFord(st);
	}
	return 0;
}

