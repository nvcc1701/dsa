#include<bits/stdc++.h>
using namespace std;

// contest10/bai1toMauDoThi

vector<int> vec[1001];
vector<bool> chuaXet(1001);
int n,m;

struct Edge {
	int x,y;
};

bool hamilton(int u,int i){
	if(i == n){
		return true;
	}
	for(int v=0;v<vec[u].size();v++){
		if(chuaXet[vec[u][v]]){
			chuaXet[vec[u][v]] = false;
			if(hamilton(vec[u][v],i+1)){
				return true;
			}
			chuaXet[vec[u][v]] = true;
		}
	}
	return false;
}

bool checkHamilton(){
	for(int u=1;u<=n;u++){
		if(hamilton(u,0)){
			return true;
		}
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<1001;i++){
			vec[i].clear();
			chuaXet[i] = true;
		}
		Edge edges[m];
		for(int i=0;i<m;i++){
			cin>>edges[i].x>>edges[i].y;
			vec[edges[i].x].push_back(edges[i].y);
			vec[edges[i].y].push_back(edges[i].x);
		}
		if(checkHamilton()){
			cout<<"1\n";
		}
		else{
			cout<<"0\n";
		}
	}
	return 0;
}

