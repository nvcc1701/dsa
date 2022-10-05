#include<bits/stdc++.h>
using namespace std;

// contest9/bai11timDuongDiDFSCoHuong

struct Edge{
	int x,y;
};

bool cmp(Edge a,Edge b){
	if(a.x == b.x){
		return a.y < b.y;
	}
	return a.x < b.x;
}

vector<int> vec[1001];
int truoc[1001];

void DFS(int n,int u){
	vector<bool> chuaXet(n+1,true);
	stack<int> myS;
	myS.push(u);
	chuaXet[u] = false;
	truoc[u] = 0;
	while(!myS.empty()){
		int s = myS.top();
		myS.pop();
		for(int t = 0;t<vec[s].size();t++){
			if(chuaXet[vec[s][t]]){
				chuaXet[vec[s][t]] = false;
				truoc[vec[s][t]] = s;
				myS.push(s);
				myS.push(vec[s][t]);
				break;
			}
		}
	}
}

void print_PathDFS(int s,int t){
	if(truoc[t] == 0){
		cout<<"-1\n";
	}
	else{
		vector<int> res;
		int u = t;
		while(u>0){
			res.push_back(u);
			u = truoc[u];
		}
		for(int i =res.size()-1;i>=0;i--){
			cout<<res[i]<<" ";
		}
		cout<<"\n";
	}
}

int main(){
	int test;
	cin>>test;
	while(test--){
		for(int i=0;i<1001;i++){
			vec[i].clear();
			truoc[i] = 0;
		}
		int n,m,s,t;
		cin>>n>>m>>s>>t;
		Edge edges[m];
		for(int i=0;i<m;i++){
			cin>>edges[i].x>>edges[i].y;
		}
		sort(edges,edges+m,cmp);
		for(int i=0;i<m;i++){
			vec[edges[i].x].push_back(edges[i].y);
//			vec[edges[i].y].push_back(edges[i].x);
		}
		DFS(n,s);
		print_PathDFS(s,t);
	}
	return 0;
}

