#include<bits/stdc++.h>
using namespace std;

// contest10/bai16noiDiem

#define INF 1e9

vector<pair<int,float> > vec[6000];
int n;
int cha[101];
int m;

struct Point{
	int x,y;
	float w;
};

bool cmp(Point a, Point b){
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

bool chuTrinh(vector<Point> a){
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

void noiDiem1(Point points[]){
	vector<Point> tree;
	tree.push_back(points[0]);
	float minCost = points[0].w;
	for(int i=1;i<m;i++){
		if(tree.size() > n-1){
			break;
		}
		tree.push_back(points[i]);
		if(!chuTrinh(tree)){
			minCost += points[i].w;
		}
		else{
			tree.pop_back();
			continue;
		}
	}
	printf("%.6lf\n",minCost);
//	cout<<fixed<<setprecision(6)<<minCost<<"\n";
}

void noiDiem(){		// prim
	float minCost = 0;
	vector<bool> chuaXet(n+1,true);
	float cost[n+1];
	for(int i=0;i<=n;i++){
		cost[i] = INF;
	}
	vector<int> cha(n+1,-1);
	priority_queue<pair<float,int>, vector<pair<float,int> >, greater<pair<float,int> > > myPQ;
	myPQ.push(make_pair(0,1));
	cost[1] = 0;
	while(!myPQ.empty()){
		int u = myPQ.top().second;
		myPQ.pop();
		chuaXet[u] = false;
		for(int t = 0;t < vec[u].size();t++){
			int v = vec[u][t].first;
			float w = vec[u][t].second;
			if(chuaXet[v] && cost[v] > w){
				cost[v] = w;
				cha[v] = u;
				myPQ.push(make_pair(cost[v],v));
			}
		}
	}
	for(int i=1;i<=n;i++){
		minCost += cost[i];
	}
	cout<<fixed<<setprecision(6)<<minCost<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<6000;i++){
			vec[i].clear();
		}
		cin>>n;
		m = 0;
		float a[n+1],b[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i]>>b[i];
		}
		Point points[6000];
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				points[m].x = i;points[m].y = j;
				float c = sqrt((a[j]-a[i])*(a[j]-a[i]) + (b[j]-b[i])*(b[j]-b[i]));
				points[m].w = c;
				m++;
				vec[i].push_back(make_pair(j,c));
				vec[j].push_back(make_pair(i,c));
			}
		}
		sort(points,points+m,cmp);
		noiDiem1(points);
	}
	return 0;
}

