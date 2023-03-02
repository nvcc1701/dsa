#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> ke[1005];
int truoc[1005];
void BFS(int u, int v){
	queue<int> q;
	q.push(u);
	while(q.size()>0){
		int top = q.front();
		q.pop();
		chuaxet[top] = true;
		if(top == v){
			cout<<"YES";
			return;
		}
		for(int i=0; i<ke[top].size(); i++){
			if(!chuaxet[ke[top][i]]){
				chuaxet[ke[top][i]] = true;
				truoc[ke[top][i]] = top;
				q.push(ke[top][i]);
			}
		}
	}
	cout<<"NO";
}
main(){
	int t; cin>>t;
	while(t--){
		for(int i=0; i<1005; i++){
			ke[i].clear();
		}
		int N, M;
		cin>>N>>M;
		for(int i=0; i<M; i++){
			int u, v;
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		int q;
		cin>>q;
		while(q--){
			memset(chuaxet, false, sizeof(chuaxet));
			int u, v;
			cin>>u>>v;
			BFS(u, v);
			cout<<endl;
		}
	}
}
