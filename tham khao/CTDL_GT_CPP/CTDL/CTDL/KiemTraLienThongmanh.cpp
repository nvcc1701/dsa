#include<bits/stdc++.h>
using namespace std;

bool chuaxet[1005];
vector<int> ke[1005];
int truoc[1005];
void DFS(int u){
	chuaxet[u] = true;
	for(int i=0; i<ke[u].size(); i++){
		if(!chuaxet[ke[u][i]]){
			truoc[ke[u][i]] = u;
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
		//memset(chuaxet, false, sizeof(chuaxet));
		int a, b;
		cin>>a, b;
		for(int i=0; i<b; i++){
			int u, v;
			cin>>u>>v;
			ke[u].push_back(v);
		}
		bool check = true;
		for(int i=1; i<=a; i++){
			memset(chuaxet, false, sizeof(chuaxet));
			DFS(i);
			for(int j=1; j<=a; j++){
				if(chuaxet[j] == false){
					check = false;
					break;
				}
			}
			if(check) continue;
		}
		if(check) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
	
}
