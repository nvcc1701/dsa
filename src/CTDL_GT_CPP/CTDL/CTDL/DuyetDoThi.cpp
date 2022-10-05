#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> ke[1005];
int n, m, u;
void DFS(int u){
	chuaxet[u] = false;
	cout<<u<<" ";
	for(int i=0; i<ke[u].size(); i++){
		int v = ke[u][i];
		if(chuaxet[v]) DFS(v);
	}
}
main(){
	int t, x, y, i;
	cin>>t;
	while(t--){
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i=0; i<1005; i++)
			ke[i].clear();
		cin>>n>>m>>u;
		for(int i=1; i<=m; i++){
			cin>>x>>y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		cout<<"DFS("<<u<<") = ";
		DFS(u);
		cout<<endl;
	}
}
