#include<bits/stdc++.h>
using namespace std;

// contest9/bai1chuyenDSCanhSangDSKe

struct Edge{
	int u;
	int v;
};

bool cmp(Edge a, Edge b){
	if(a.u == b.u){
		return a.v<b.v;
	}
	return a.u<b.u;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		Edge edges[m];
		for(int i=0;i<m;i++){
			cin>>edges[i].u>>edges[i].v;
		}
		sort(edges,edges+m,cmp);
		vector<vector<int> > vec(n);
		for(int i=0;i<m;i++){
			vec[edges[i].u-1].push_back(edges[i].v);
			vec[edges[i].v-1].push_back(edges[i].u);
		}
		for(int i=0;i<n;i++){
//			if(v[i].size()>0){
				cout<<i+1<<":";
				for(int j=0;j<vec[i].size();j++){
					cout<<" "<<vec[i][j];
				}
				cout<<"\n";
//			}
		}
	}
	return 0;
}

