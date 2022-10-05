#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
int vs[1005], ok;
int fr[1005];

void DFS(int u){
	vs[u] = 1;
	for(int i=0; i<ke[u].size(); i++){
		if(vs[ke[u][i]]) {
			if(fr[ke[u][i]]){
				ok=1; 
				return;
			}
		}
		fr[ke[u][i]] = 1;
		DFS(ke[u][i]);
		fr[ke[u][i]] = 0;
	}
}
main(){
	int t; cin>>t;
	while(t--){
		int v, e;
		cin>>v>>e;
		memset(vs, false, sizeof(vs));
		for(int i=0; i<v; i++)
			ke[i].clear();
		for(int i=1; i<=e; i++){
			int a, b;
			cin>>a>>b;
			ke[a].push_back(b);
		}
		ok = 0;
		for(int i=1; i<=v; i++){
			if(ok) break;
			memset(fr, 0, sizeof(fr));
			fr[i] = 1;
			DFS(i);
			fr[i] = 0;
		}
		if(ok) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
