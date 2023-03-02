#include<bits/stdc++.h>
using namespace std;

// contest9/bai25chuTrinhSuDungUnionSet

vector<int> cha(1001);
int n,m;

struct Edge{
	int u,v;
};

Edge edges[1001];

void init(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cha[i] = -1;
	}
	for(int i=0;i<m;i++){
		cin>>edges[i].u>>edges[i].v;
	}
}

int find(int p){
	if(cha[p] == -1){
		return p;
	}
	return find(cha[p]);
}

void Union(int x,int y){
	int xSet = find(x);
	int ySet = find(y);
	if(xSet != ySet){
		cha[xSet] = ySet;
	}
}

bool checkCT(){
	for(int i=0;i<m;i++){
		int x = find(edges[i].u);
		int y = find(edges[i].v);
		if(x == y){
			return true;
		}
		else{
			Union(x,y);
		}
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		if(checkCT()){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}

