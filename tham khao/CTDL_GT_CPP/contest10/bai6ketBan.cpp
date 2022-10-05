#include<bits/stdc++.h>
using namespace std;

// contest10/bai6ketBan

vector<int> vec[100001];
bool chuaXet[100001];
int n,m;

struct Edge{
	int x,y;
};

Edge edges[100001];

int DFS(int u){
	stack<int> myS;
	myS.push(u);
	chuaXet[u] = false;
	int count = 1;
	while(!myS.empty()){
		int s = myS.top();
		myS.pop();
		for(int t=0;t<vec[s].size();t++){
			if(chuaXet[vec[s][t]]){
				count++;
				chuaXet[vec[s][t]] = false;
				myS.push(s);
				myS.push(vec[s][t]);
				break;
			}
		}
	}
	return count;
}

int ketBan(){
	int res = 1;
	for(int u=1;u<=n;u++){
		if(chuaXet[u]){
			res = max(res,DFS(u));
		}
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<100001;i++){
			vec[i].clear();
			chuaXet[i] = true;
		}
		cin>>n>>m;
		for(int i=0;i<m;i++){
			cin>>edges[i].x>>edges[i].y;
			vec[edges[i].x].push_back(edges[i].y);
			vec[edges[i].y].push_back(edges[i].x);
		}
		cout<<ketBan()<<"\n";
	}
	return 0;
}

