#include<bits/stdc++.h>
using namespace std;

// contest9/bai15soTPLT_DFS
vector<int> vec[1001];
vector<bool> chuaXet(1001);
int n,m;

struct Edge{
	int x,y;
};

bool cmp(Edge a,Edge b){
	if(a.x == b.x){
		return a.y < b.y;
	}
	return a.x < b.x;
}

void init(){
	cin>>n>>m;
	Edge edges[m];
	for(int i=0;i<1001;i++){
		vec[i].clear();
		chuaXet[i] = true;
	}
	for(int i=0;i<m;i++){
		cin>>edges[i].x>>edges[i].y;
	}
//	sort(edges,edges+m,cmp);
	for(int i=0;i<m;i++){
		vec[edges[i].x].push_back(edges[i].y);
		vec[edges[i].y].push_back(edges[i].x);
	}
}

void DFS(int u){
	stack<int> myS;
	myS.push(u);
	chuaXet[u] = false;
	while(!myS.empty()){
		int s = myS.top();
		myS.pop();
		for(int t=0;t<vec[s].size();t++){
			if(chuaXet[vec[s][t]]){
				chuaXet[vec[s][t]] = false;
				myS.push(s);
				myS.push(vec[s][t]);
				break;
			}
		}
	}
}

void deQuy_DFS(int u){
	chuaXet[u] = false;
	for(int v=0;v<vec[u].size();v++){
		if(chuaXet[vec[u][v]]){
			deQuy_DFS(vec[u][v]);
		}
	}
}

int soTPLT(){
	int soTPLT = 0;
	for(int u=1;u<=n;u++){
		if(chuaXet[u]){
			soTPLT++;
//			DFS(u);
			deQuy_DFS(u);
		}
	}
	return soTPLT;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		cout<<soTPLT()<<"\n";
	}
	return 0;
}

