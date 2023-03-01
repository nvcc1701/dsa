#include<bits/stdc++.h>
using namespace std;
int n, m, u;
bool ChuaXet[1005];
vector<int> List[1005];
void DFS(int u){
	ChuaXet[u] = false;
	cout<<u<<" ";
	for(int i=0; i<List[u].size(); i++){
		int v = List[u][i];
		if(ChuaXet[v]) DFS(v);
	}
}
main(){
	int t, u, x, y, i;
	cin>>t;
	while(t--){
		memset(ChuaXet, true, sizeof(ChuaXet));
		for(int i=0; i<1005; i++){
			List[i].clear();
		}
		cin>>n>>m>>u;
		for(int i=1;i<=m;i++){
			cin>>x>>y;
			List[x].push_back(y);
		}
		DFS(u);
		cout<<endl;
	}
}
