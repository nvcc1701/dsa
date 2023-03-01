#include<bits/stdc++.h>
using namespace std;

// contest10/bai19bangSo

#define INF 1e9

int n,m;
int arr[501][501];
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int cost[501][501];

struct Point{
	int x,y,w;
	Point(int X,int Y,int W){
		x = X;
		y = Y;
		w = W;
	}
};

void init(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
			cost[i][j] = INF;
		}
	}
}

bool operator<(const Point &a, const Point &b) 
{ 
    if (a.w == b.w) 
    { 
        if (a.x != b.x) 
            return (a.x < b.x); 
        else
            return (a.y < b.y); 
    } 
    return (a.w < b.w); 
} 

bool diDuoc(int x,int y){
	return (x>=0 && y>=0 && x<n && y<m);
}

void bangSo(){
	set<Point> mySet;
	mySet.insert(Point(0,0,0));
	cost[0][0] = arr[0][0];
	while(!mySet.empty()){
		Point b = *mySet.begin();
		mySet.erase(mySet.begin());
		for(int i=0;i<4;i++){
			int x_Next = b.x + dx[i];
			int y_Next = b.y + dy[i];
			if(!diDuoc(x_Next,y_Next)){
				continue;
			}
			if(cost[x_Next][y_Next] > cost[b.x][b.y] + arr[x_Next][y_Next]){
				if(cost[x_Next][y_Next] != INF){
					mySet.erase(mySet.find(Point(x_Next,y_Next,cost[x_Next][y_Next])));
				}
				cost[x_Next][y_Next] = cost[b.x][b.y] + arr[x_Next][y_Next];
				mySet.insert(Point(x_Next,y_Next,cost[x_Next][y_Next]));
			}
		}
	}
	cout<<cost[n-1][m-1]<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		bangSo();
	}
	return 0;
}

