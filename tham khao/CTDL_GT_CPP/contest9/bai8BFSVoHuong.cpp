#include<bits/stdc++.h>
using namespace std;

// contest9/bai8BFSVoHuong

vector<int> vec[1001];

struct Edge{
	int x,y;
};

bool cmp(Edge a, Edge b){
	if(a.x == b.x){
		return a.y < b.y;
	}
	return a.y < b.y;
}

void BFS(int n,int u){
	vector<bool> chuaXet(n+1,true);
	queue<int> myQ;
	myQ.push(u);
	chuaXet[u] = false;
	while(!myQ.empty()){
		int s = myQ.front();
		myQ.pop();
		cout<<s<<" ";
		for(int t=0;t<vec[s].size();t++){
			if(chuaXet[vec[s][t]]){
				chuaXet[vec[s][t]] = false;
				myQ.push(vec[s][t]);
			}
		}
	}
	cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,u;
		cin>>n>>m>>u;
		for(int i=0;i<1001;i++){
			vec[i].clear();
		}
		Edge edges[m];
		for(int i=0;i<m;i++){
			cin>>edges[i].x>>edges[i].y;
		}
//		sort(edges,edges+m,cmp);
		for(int i=0;i<m;i++){
			vec[edges[i].x].push_back(edges[i].y);
			vec[edges[i].y].push_back(edges[i].x);
		}
		BFS(n,u);
	}
	return 0;
}

