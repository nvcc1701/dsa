#include<bits/stdc++.h>
using namespace std;

// contest10/bai14DIJKSTRA
#define INF 1e9

vector<pair<int,int> > vec[1001];
int n,m,st;

struct Edge{
	int x,y,w;
};

void DIJKSTRA(int s){
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > myPQ;
	vector<int> dist(n+1,INF);
	myPQ.push(make_pair(0,st));
	dist[st] = 0;
	while(!myPQ.empty()){
		int u = myPQ.top().second;	// lay dinh
		myPQ.pop();
		for(int t=0;t<vec[u].size();t++){
			int v = vec[u][t].first;
			int w = vec[u][t].second;
			if(dist[v] > dist[u] + w){
				dist[v] = dist[u] + w;
				myPQ.push(make_pair(dist[v],v));
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<dist[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<1001;i++){
			vec[i].clear();
		}
		cin>>n>>m>>st;
		Edge edges[m];
		for(int i=0;i<m;i++){
			cin>>edges[i].x>>edges[i].y>>edges[i].w;
			vec[edges[i].x].push_back(make_pair(edges[i].y,edges[i].w));
			vec[edges[i].y].push_back(make_pair(edges[i].x,edges[i].w));
		}
		DIJKSTRA(st);
	}
	return 0;
}

