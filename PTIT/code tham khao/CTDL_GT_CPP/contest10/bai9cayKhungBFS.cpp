#include<bits/stdc++.h>
using namespace std;

// contest10/bai9cayKhungBFS

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

void tree_BFS(int n,int u){
	queue<int> myQ;
	myQ.push(u);
	chuaXet[u] = false;
	while(!myQ.empty() && tree.size()/2<(n-1)){
		int s = myQ.front();
		myQ.pop();
		for(int t=0;t<vec[s].size();t++){
			if(chuaXet[vec[s][t]]){
				chuaXet[vec[s][t]] = false;
				tree.push_back(s);
				tree.push_back(vec[s][t]);
				myQ.push(vec[s][t]);
			}
		}
	}
}

void tree_Graph_BFS(int n,int u){
	tree_BFS(n,u);
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
		tree_Graph_BFS(n,u);
	}
	return 0;
}

