#include<bits/stdc++.h>
using namespace std;

// contest9/bai27kiemTraChuTrinhDFSCoHuong

vector<int> vec[1001];
vector<bool> chuaXet(1001);
vector<bool> daDuocDuyet(1001);
int n,m;

struct Edge{
	int x,y;
};

bool cmp(Edge a,Edge b){
	if(a.x == b.x){
		return a.y < b.y;
	}
	return a.x < b.x;
}

void init(){
	cin>>n>>m;
	Edge edges[1001];
	for(int i=0;i<1001;i++){
		vec[i].clear();
		chuaXet[i] = true;
		daDuocDuyet[i] = false;
	}
	for(int i=0;i<m;i++){
		cin>>edges[i].x>>edges[i].y;
	}
//	sort(edges,edges+m,cmp);
	for(int i=0;i<m;i++){
		vec[edges[i].x].push_back(edges[i].y);
//		vec[edges[i].y].push_back(edges[i].x);
	}
}

bool checkCT(int u){
	if(chuaXet[u]){
		chuaXet[u] = false;
		daDuocDuyet[u] = true;
		for(int v = 0;v<vec[u].size();v++){
			if(chuaXet[vec[u][v]]){
				if(checkCT(vec[u][v])){
					return true;
				}
			}
			else if(daDuocDuyet[vec[u][v]]){
				return true;
			}
		}
	}
	daDuocDuyet[u] = false; // loai bo dinh khoi chu trinh duyet. 
	return false;
}

bool chuTrinh_DFS_CoHuong(){
	for(int u=1;u<=n;u++){
		if(checkCT(u)){
			return true;
		}
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		if(chuTrinh_DFS_CoHuong()){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}

