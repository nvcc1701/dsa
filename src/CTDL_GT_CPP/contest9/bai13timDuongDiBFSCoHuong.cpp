#include<bits/stdc++.h>
using namespace std;

// contest9/bai13timDuongDiBFSCoHuong

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

void BFS(int n,int u){
	vector<bool> chuaXet(n+1,true);
	queue<int> myQ;
	myQ.push(u);
	chuaXet[u] = false;
	while(!myQ.empty()){
		int s = myQ.front();
		myQ.pop();
		for(int t = 0;t<vec[s].size();t++){
			if(chuaXet[vec[s][t]]){
				chuaXet[vec[s][t]] = false;
				truoc[vec[s][t]] = s;
				myQ.push(vec[s][t]);
			}
		}
	}
}

void print_PathBFS(int s,int t){
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
		for(int i=res.size()-1;i>=0;i--){
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
		BFS(n,s);
		print_PathBFS(s,t);
	}
	return 0;
}

