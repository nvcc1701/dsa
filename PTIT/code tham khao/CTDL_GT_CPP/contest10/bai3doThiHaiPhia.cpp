#include<bits/stdc++.h>
using namespace std;

// contest10/bai3doThiHaiPhia

vector<int> vec[1001];
vector<int> color(1001);
int n,m;

struct Edge {
	int x,y;
};

bool checkDoThiHaiPhia(int u){
	color[u] = 1;
	queue<int> myQ;
	myQ.push(u);
	while(!myQ.empty()){
		u = myQ.front();
		myQ.pop();
		for(int v=0;v<vec[u].size();v++){
			if(color[vec[u][v]] == -1){
				color[vec[u][v]] = 1 - color[u];
				myQ.push(vec[u][v]);
			}
			else if(color[u] == color[vec[u][v]]){
				return false;
			}
		}
	}
	return true;
}

bool doThiHaiPhia(){
	for(int u=1;u<=n;u++){
		if(color[u] == -1){
			if(!checkDoThiHaiPhia(u)){
				return false;;
			}
		}
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<1001;i++){
			vec[i].clear();
			color[i] = -1;
		}
		Edge edges[m];
		for(int i=0;i<m;i++){
			cin>>edges[i].x>>edges[i].y;
			vec[edges[i].x].push_back(edges[i].y);
			vec[edges[i].y].push_back(edges[i].x);
		}
		if(doThiHaiPhia()){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}

