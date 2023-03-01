#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> ke[1005];
int truoc[1005];
void DFS(int u, int v){
	if(chuaxet[u]) return;
	chuaxet[u] = true;
	for(int i=0; i<ke[u].size(); i++){
		if(!chuaxet[ke[u][i]]){
			truoc[ke[u][i]] = u;
			DFS(ke[u][i],v);
		} 
	}
}

void Trace(int u, int v){
	if(!chuaxet[v]){
		cout<<"-1";
		return;
	}
	vector<int> a;
	while(u!=v){
		a.push_back(u);
		u = truoc[u];
	}
	a.push_back(v);
	reverse(a.begin(), a.end());
	for(int i=0; i<a.size(); i++){
		cout<<a[i]<<' ';
	}
}
main(){
	int t; cin>>t;
	int a, b, nguon, dich;
	while(t--){
		for(int i=0; i<1005; i++){
			ke[i].clear();
		}
		memset(chuaxet, false, sizeof(chuaxet));
		memset(truoc, 0 , sizeof(truoc));
		cin>>a>>b>>nguon>>dich;
		for(int i=0; i<b; i++){
			int u, v;
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		DFS(nguon, dich);
		Trace(dich, nguon);
		cout<<endl;
	}
}
