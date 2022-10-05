#include<bits/stdc++.h>
using namespace std;

// contest10/bai10KRUSKAL
//su dung unionset

int n,m;
int cha[1001];

struct Edge{
	int x,y,w;
};

bool cmp(Edge a , Edge b){
	return a.w < b.w;
}

int find(int i){
	if(cha[i] == -1){
		return i;
	}
	return find(cha[i]);
}

void Union(int x,int y){
	int xSet = find(x);
	int ySet = find(y);
	if(xSet != ySet){
		cha[xSet] = ySet;
	}
}

bool chuTrinh(vector<Edge> a){
	memset(cha,-1,sizeof(cha));
	for(int i=0;i<a.size();i++){
		int xSet = find(a[i].x);
		int ySet = find(a[i].y);
		if(xSet == ySet){
			return true;
		}
		Union(xSet,ySet);
	}
	return false;
}

void KRUSKAL(Edge edges[]){
	vector<Edge> tree;
	tree.push_back(edges[0]);
	int minCost = edges[0].w;
	for(int i=1;i<m;i++){
		tree.push_back(edges[i]);
		if(!chuTrinh(tree)){
			minCost += edges[i].w;
		}
		else{
			tree.pop_back();
			continue;
		}
		if(tree.size() > n-1){
			break;
		}
	}
	cout<<minCost<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		Edge edges[m];
		for(int i=0;i<m;i++){
			cin>>edges[i].x>>edges[i].y>>edges[i].w;
		}
		sort(edges,edges+m,cmp);
		KRUSKAL(edges);
	}
	return 0;
}

