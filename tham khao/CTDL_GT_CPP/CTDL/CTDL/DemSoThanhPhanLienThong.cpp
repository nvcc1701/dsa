#include<bits/stdc++.h>
using namespace std;

bool chuaxet[1005];
vector<int> ke[1005];

void DFS(int u){
	chuaxet[u] = true;
	for(int i=0; i<ke[u].size(); i++){
		if(!chuaxet[ke[u][i]]){
			DFS(ke[u][i]);
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		for(int i=0; i<1005; i++){
			ke[i].clear();
		}
		memset(chuaxet, false, sizeof(chuaxet));
		int a, b;
		cin>>a>>b;
		for(int i=0; i<b; i++){
			int u, v;
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		int res = 0;
		for(int i=1; i<=a; i++){
			if(!chuaxet[i]){
				res++;
				DFS(i);
			}
		}
		cout<<res<<endl;
	}
	return 0;
	
}
