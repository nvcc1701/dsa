#include<bits/stdc++.h>
using namespace std;

// contest9/bai22canhCau_BFS

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

Edge edges[1001];

void init(){
	cin>>n>>m;
	for(int i=0;i<1001;i++){
		vec[i].clear();
	}
	for(int i=0;i<m;i++){
		cin>>edges[i].x>>edges[i].y;
	}
	sort(edges,edges+m,cmp);
	for(int i=0;i<m;i++){
		vec[edges[i].x].push_back(edges[i].y);
		vec[edges[i].y].push_back(edges[i].x);
	}
}

void reInit(){
	for(int i=1;i<=n;i++){
		chuaXet[i] = true;
	}
}

int BFS(int u,int x,int y){
	int count = 0;
	queue<int> myQ;
	myQ.push(u);
	chuaXet[u] = false;
	count++;
	while(!myQ.empty()){
		int s = myQ.front();
		myQ.pop();
		for(int t=0;t<vec[s].size();t++){
			if(chuaXet[vec[s][t]]){
				if((s == x && vec[s][t] == y) || (s == y && vec[s][t] == x)){
					continue;
				}
				chuaXet[vec[s][t]] = false;
				myQ.push(vec[s][t]);
				count++;
			}
		}
	}
	return count;
}

void dinhTru_BFS(){
	reInit();
	for(int i=0;i<m;i++){
		if(BFS(1,edges[i].x,edges[i].y) != n){
			cout<<edges[i].x<<" "<<edges[i].y<<" ";
		}
		reInit();
	}
	cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		dinhTru_BFS();
	}
	return 0;
}

