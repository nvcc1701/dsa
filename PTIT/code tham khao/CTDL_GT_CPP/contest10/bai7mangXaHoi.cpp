#include<bits/stdc++.h>
using namespace std;

// contest10/bai7mangXaHoi

vector<int> vec[100001];
int n,m;

void mangXaHoi(){
	for(int u=1;u<=n;u++){
		if(vec[u].empty()){
			continue;
		}
		for(int j=0;j<vec[u].size();j++){
			int v = vec[u][j];
			if(vec[v].size() != vec[u].size()){
				cout<<"NO\n";
				return;
			}
		}
	}
	cout<<"YES\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<100001;i++){
			vec[i].clear();
		}
		int a,b;
		for(int i=0;i<m;i++){
			cin>>a>>b;
			vec[a].push_back(b);
			vec[b].push_back(a);
		}
		mangXaHoi();
	}
	return 0;
}

