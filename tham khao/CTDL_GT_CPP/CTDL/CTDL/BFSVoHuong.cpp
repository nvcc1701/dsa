#include<bits/stdc++.h>
using namespace std;
bool ChuaXet[1005];
vector<int> List[1005];
void BFS(int u){
	queue<int>q; q.push(u);
	ChuaXet[u]=false;
	cout<<u<<" ";
	while(!q.empty()){
		int x=q.front(); q.pop();
		for(int i=0; i<List[x].size(); i++){
			int y=List[x][i];
			if(ChuaXet[y]){
				q.push(y); 
				ChuaXet[y] = false;
				cout<<y<<" ";
			}
		}
	}
	cout<<endl;
}
main(){
	int t, u, x, y, i, n, m;
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
			List[y].push_back(x);
		}
		BFS(u);
	}
}
