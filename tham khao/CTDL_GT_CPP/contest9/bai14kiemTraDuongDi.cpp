#include<bits/stdc++.h>
using namespace std;

// contest9/ bai14kiemTraDuongDi

vector<int> vec[1001];
int truoc[1001];

struct Edge {
	int x,y;
};

bool cmp(Edge a , Edge b){
	if(a.x == b.x){
		return a.y < b.y;
	}
	return a.x < b.x;
}

void pathBFS(int n,int u,int v){
	memset(truoc,0,sizeof(truoc));
	vector<bool> chuaXet(n+1,true);
	queue<int> myQ;
	myQ.push(u);
	chuaXet[u] = false;
	while(!myQ.empty()){
		int s = myQ.front();
		myQ.pop();
		for(int t=0;t<vec[s].size();t++){
			if(chuaXet[vec[s][t]]){
				chuaXet[vec[s][t]] = false;
				truoc[vec[s][t]] = s;
				myQ.push(vec[s][t]);
			}
		}
	}
	if(truoc[v] == 0){
		cout<<"NO\n";
	}
	else{
		cout<<"YES\n";
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<1001;i++){
			vec[i].clear();
		}
		int n,m;
		cin>>n>>m;
		Edge edges[m];
		for(int i=0;i<m;i++){
			cin>>edges[i].x>>edges[i].y;
		}
		sort(edges,edges+m,cmp);
		for(int i=0;i<m;i++){
			vec[edges[i].x].push_back(edges[i].y);
			vec[edges[i].y].push_back(edges[i].x);
		}
		int q,u,v;
		cin>>q;
		for(int i=0;i<q;i++){
			cin>>u>>v;
			pathBFS(n,u,v);
		}
	}
	return 0;
}

