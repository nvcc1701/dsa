#include<bits/stdc++.h>
using namespace std;

// contest9/bai24kiemTraChuTrinhBFS

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
	Edge edges[1001];
	for(int i=0;i<1001;i++){
		vec[i].clear();
		chuaXet[i] = true;
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

bool checkCT(int u){
	vector<int> truoc(n+1,0);
	queue<int> myQ;
	myQ.push(u);
	chuaXet[u] = false;
	while(!myQ.empty()){
		int s =  myQ.front();
		myQ.pop();
		for(int t=0;t<vec[s].size();t++){
			if(chuaXet[vec[s][t]]){
				chuaXet[vec[s][t]] = false;
				truoc[vec[s][t]] = s;
				myQ.push(vec[s][t]);
			}
			else if(vec[s][t] != truoc[s]){
				return true;
			}
		}
	}
	return false;
}

bool chuTrinhBFS(){
	for(int u=1;u<=n;u++){
		if(chuaXet[u]){
			if(checkCT(u)){
				return true;
			}
		}
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		if(chuTrinhBFS()){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}

