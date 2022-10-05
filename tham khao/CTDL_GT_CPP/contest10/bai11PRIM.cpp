#include<bits/stdc++.h>
using namespace std;

// contest10/bai11PRIM

#define INF 1e9

vector<pair<int,int> > vec[1001];
int n,m;

void prim(){
	int minCost = 0;
	vector<int> cost(n+1,INF);
	vector<int> cha(n+1,-1);
	vector<bool> chuaXet(n+1,true);
	priority_queue<pair<int,int>, vector<pair<int,int> >,greater<pair<int,int> > > myPQ;
	myPQ.push(make_pair(0,1));
	cost[1] = 0;
	while(!myPQ.empty()){
		int u = myPQ.top().second;
		myPQ.pop();
		chuaXet[u] = false;
		for(int t=0;t<vec[u].size();t++){
			int v = vec[u][t].first;
			int w = vec[u][t].second;
			if(chuaXet[v] && cost[v] > w){
				cost[v] = w;
				cha[v] = u;
				myPQ.push(make_pair(cost[v],v));
			}
		}
	}
	for(int i=1;i<=n;i++){
		minCost += cost[i];
	}
	cout<<minCost<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<1001;i++){
			vec[i].clear();
		}
		int a,b,c;
		for(int i=0;i<m;i++){
			cin>>a>>b>>c;
			vec[a].push_back(make_pair(b,c));
			vec[b].push_back(make_pair(a,c));
		}
		prim();
	}
	return 0;
}

