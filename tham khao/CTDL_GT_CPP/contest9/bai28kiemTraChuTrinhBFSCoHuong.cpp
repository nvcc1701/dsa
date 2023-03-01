#include<bits/stdc++.h>
using namespace std;

// contest9/bai28kiemTraChuTrinhBFSCoHuong

vector<int> vec[1001];
vector<int> degTru(1001);
int n,m;

struct Edge{
	int x,y;
};

bool cmp(Edge a, Edge b){
	if(a.x == b.x){
		return a.y < b.y;
	}
	return a.x<b.x;
}

void init(){
	cin>>n>>m;
	Edge edges[m];
	for(int i=0;i<1001;i++){
		vec[i].clear();
	}
	for(int i=1;i<=n;i++){
		degTru[i] = 0;
	}
	for(int i=0;i<m;i++){
		cin>>edges[i].x>>edges[i].y;
	}
//	sort(edges,edges+m,cmp);
	for(int i=0;i<m;i++){
		vec[edges[i].x].push_back(edges[i].y);
	}
	for(int u=1;u<=n;u++){
		for(int v=0;v<vec[u].size();v++){
			degTru[vec[u][v]]++;
		}
	}
}

void chuTrinh_BFS_CoHuong(){
	queue<int> myQ;
	for(int u=1;u<=n;u++){
		if(degTru[u] == 0){
			myQ.push(u);
		}
	}
	vector<int> top;
	int count = 0;
	while(!myQ.empty()){
		int u = myQ.front();
		myQ.pop();
		top.push_back(u);
		for(int v=0;v<vec[u].size();v++){
			degTru[vec[u][v]]--;
			if(degTru[vec[u][v]] == 0){
				myQ.push(vec[u][v]);
			}
		}
		count++;
	}
	if(count == n){
		cout<<"NO\n";
	}
	else{
		cout<<count;
		cout<<"YES\n";
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		chuTrinh_BFS_CoHuong();
	}
	return 0;
}

