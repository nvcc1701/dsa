#include<bits/stdc++.h>
using namespace std;

// contest10/bai5chuCuuXaCach

int n,k,m;
bool chuaXet[101][101];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};
set<pair<pair<int,int>,pair<int,int> > > mySet;
vector<pair<int,int> > vec;

void init(){
	cin>>n>>k>>m;
	int u,v,x,y;
	for(int i=0;i<m;i++){
		cin>>u>>v>>x>>y;
		mySet.insert(make_pair(make_pair(u,v),make_pair(x,y)));
		mySet.insert(make_pair(make_pair(x,y),make_pair(u,v)));
	}
	int a,b;
	for(int i=0;i<k;i++){
		cin>>a>>b;
		vec.push_back(make_pair(a,b));
	}
}

bool diDuoc(int x,int y){
	return (x>=1 && y>=1 && x<=n && y<=n && chuaXet[x][y]);
}

void BFS(pair<int,int> u ){
	memset(chuaXet,true,sizeof(chuaXet));
	queue<pair<int,int> > myQ;
	myQ.push(u);
	chuaXet[u.first][u.second] = false;
	while(!myQ.empty()){
		pair<int,int> v = myQ.front();
		myQ.pop();
		for(int i=0;i<4;i++){
			int x_Next = v.first + dx[i];
			int y_Next = v.second + dy[i];
			if(diDuoc(x_Next,y_Next) && mySet.find(make_pair(v,make_pair(x_Next,y_Next))) == mySet.end()){
				chuaXet[x_Next][y_Next] = false;
				myQ.push(make_pair(x_Next,y_Next));
			}
		}
	}
}

int main(){
//	int t;
//	cin>>t;
//	while(t--){
	int res = 0;
	init();
	for(int i=0;i<vec.size();i++){
		BFS(vec[i]);
		for(int j=0;j<vec.size();j++){
			if(chuaXet[vec[j].first][vec[j].second]){
				res++;
			}
		}
	}
	cout<<res/2<<"\n";
//	}
	return 0;
}

