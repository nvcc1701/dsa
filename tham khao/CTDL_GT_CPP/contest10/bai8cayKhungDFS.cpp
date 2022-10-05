#include<bits/stdc++.h>
using namespace std;

// contest10/bai8cayKhungDFS

vector<int> vec[1001];
bool chuaXet[1001];
vector<int> tree;

struct Edge{
	int x,y;
};

void init(int m){
	for(int i=0;i<1001;i++){
		vec[i].clear();
		chuaXet[i] = true;
	}
	Edge edges[m];
	for(int i=0;i<m;i++){
		cin>>edges[i].x>>edges[i].y;
	}
	for(int i=0;i<m;i++){
		vec[edges[i].x].push_back(edges[i].y);
		vec[edges[i].y].push_back(edges[i].x);
	}
	tree.clear();
}

void tree_DFS(int u){
	chuaXet[u] = false;
	for(int v=0;v<vec[u].size();v++){
		if(chuaXet[vec[u][v]]){
			tree.push_back(u);
			tree.push_back(vec[u][v]);
			tree_DFS(vec[u][v]);
		}
	}
}

void tree_Graph_DFS(int n,int u){
	tree_DFS(u);
	if(tree.size()/2<(n-1)){
		cout<<"-1\n";
	}
	else{
		for(int i=0;i<tree.size();i+=2){
			cout<<tree[i]<<" "<<tree[i+1]<<"\n";
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,u;
		cin>>n>>m>>u;
		init(m);
		tree_Graph_DFS(n,u);
	}
	return 0;
}

