#include<bits/stdc++.h>
using namespace std;

// contest9/bai31kiemTraDoThiCoPhaiLaCayHayKhong

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
	cin>>n;
	Edge edges[1001];
	for(int i=0;i<1001;i++){
		vec[i].clear();
		chuaXet[i] = true;
	}
	for(int i=0;i<n-1;i++){
		cin>>edges[i].x>>edges[i].y;
	}
	sort(edges,edges+m,cmp);
	for(int i=0;i<n-1;i++){
		vec[edges[i].x].push_back(edges[i].y);
		vec[edges[i].y].push_back(edges[i].x);
	}
}

bool checkCT(int u,int truocU){
	chuaXet[u] = false;
	for(int v=0;v<vec[u].size();v++){
		if(chuaXet[vec[u][v]]){
			if(checkCT(vec[u][v],u)){
				return true;
			}
		}
		else if(vec[u][v] != truocU){
			return true;
		}
	}
	return false;
}

bool chuTrinh_DFS(){
	for(int u=1;u<=n;u++){
		if(chuaXet[u]){
			if(checkCT(u,0)){
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
		if(chuTrinh_DFS()){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}
	}
	return 0;
}

