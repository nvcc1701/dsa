#include<bits/stdc++.h>
using namespace std;

// contest9/bai7DFSDoThiCoHuong

vector<int> vec[1001];

struct Edge{
	int x,y;
};

bool cmp(Edge a, Edge b){
	if(a.x == b.x){
		return a.y < b.y;
	}
	return a.y < b.y;
}

void DFS(int n,int u){
	vector<bool> chuaXet(n+1,true);
	stack<int> myS;
	myS.push(u);
	chuaXet[u] = false;
	cout<<u<<" ";
	while(!myS.empty()){
		int s = myS.top();
		myS.pop();
		for(int t = 0;t<vec[s].size();t++){
			if(chuaXet[vec[s][t]]){
				chuaXet[vec[s][t]] = false;
				cout<<vec[s][t]<<" ";
				myS.push(s);
				myS.push(vec[s][t]);
				break;
			}
		}
	}
	cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,u;
		cin>>n>>m>>u;
		for(int i=0;i<1001;i++){
			vec[i].clear();
		}
		Edge edges[m];
		for(int i=0;i<m;i++){
			cin>>edges[i].x>>edges[i].y;
		}
		sort(edges,edges+m,cmp);
		for(int i=0;i<m;i++){
			vec[edges[i].x].push_back(edges[i].y);
		}
		DFS(n,u);
	}
	return 0;
}

