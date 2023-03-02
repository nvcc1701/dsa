#include<bits/stdc++.h>
using namespace std;

bool chuaxet[1005];
vector<int> ke[1005];

void BFS(int u){
	queue<int> q;
	q.push(u);
	while(q.size() > 0){
		int top = q.front();
		q.pop();
		chuaxet[top] = true;
		for(int i=0; i<ke[top].size(); i++){
			if(!chuaxet[ke[top][i]]){
				chuaxet[ke[top][i]] = true;
				q.push(ke[top][i]);
			}
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
				BFS(i);
			}
		}
		cout<<res<<endl;
	}
	return 0;
	
}
