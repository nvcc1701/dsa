#include<bits/stdc++.h>
using namespace std;

// contest9/bai17kiemTraLTManhDFS

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
	}
	for(int i=0;i<m;i++){
		cin>>edges[i].x>>edges[i].y;
	}
	sort(edges,edges+m,cmp);
	for(int i=0;i<m;i++){
		vec[edges[i].x].push_back(edges[i].y);
//		vec[edges[i].y].push_back(edges[i].x);
	}
}

void reInit(){
	for(int i=1;i<=n;i++){
		chuaXet[i] = true;
	}
}

int DFS(int u){
	int count = 0;
	stack<int> myS;
	myS.push(u);
	chuaXet[u] = false;
	count++;
	while(!myS.empty()){
		int s = myS.top();
		myS.pop();
		for(int t=0;t<vec[s].size();t++){
			if(chuaXet[vec[s][t]]){
				chuaXet[vec[s][t]] = false;
				myS.push(s);
				myS.push(vec[s][t]);
				count++;
				break;
			}
		}
	}
	return count;
}

bool LTM_DFS(){
	reInit();
	for(int u=1;u<=n;u++){
		if(DFS(u) != n){
			return false;
		}
		reInit();
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		if(LTM_DFS()){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}

