#include<bits/stdc++.h>
using namespace std;

// contest10/bai10KRUSKAL
//su dung disjoin

int n,m;
int cha[1001];
int hang[1001];

struct Edge{
	int x,y,w;
};

bool cmp(Edge a , Edge b){
	return a.w < b.w;
}

void makeSet(){
	for(int i=1;i<=n;i++){
		hang[i] = 0;
		cha[i] = i;
	}
}

int find(int i){
	if(cha[i] == i){
		return i;
	}
	return find(cha[i]);
}

bool join(int x,int y){
	int xRoot = find(x);
	int yRoot = find(y);
	if(xRoot == yRoot){
		return false;
	}
	if(hang[xRoot] < hang[yRoot]){
		cha[xRoot] = yRoot;
	}
	else if(hang[xRoot] > hang[yRoot]){
		cha[yRoot] = xRoot;
	}
	else{
		cha[yRoot] = xRoot;
		hang[xRoot]++;
	}
	return true;
}

void KRUSKAL(Edge edges[]){
	makeSet();
	int minCost = 0;
	vector<Edge> tree;
	for(int i=0;i<m;i++){
		tree.push_back(edges[i]);
		if(join(edges[i].x,edges[i].y)){
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

