#include<bits/stdc++.h>
using namespace std;

// contest10/bai1toMauDoThi

vector<int> vec[1001];
vector<int> color(1001);
int n,m,slm;

struct Edge {
	int x,y;
};

bool check(int u,int c){
	for(int v=0;v<vec[u].size();v++){
		if(c == color[vec[u][v]]){
			return false;
		}
	}
	return true;
}

bool Try(int u){
	if(u == n+1){
		return true;
	}
	for(int c=1;c<=slm;c++){
		if(check(u,c)){
			color[u] = c;
			if(Try(u+1)){
				return true;
			}
			color[u] = 0;
		}
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m>>slm;
		for(int i=0;i<1001;i++){
			vec[i].clear();
			color[i] = 0;
		}
		Edge edges[m];
		for(int i=0;i<m;i++){
			cin>>edges[i].x>>edges[i].y;
			vec[edges[i].x].push_back(edges[i].y);
			vec[edges[i].y].push_back(edges[i].x);
		}
		if(Try(1)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}

