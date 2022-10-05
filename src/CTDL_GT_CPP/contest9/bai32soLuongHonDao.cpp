#include<bits/stdc++.h>
using namespace std;

// contest9/bai32soLuongHonDao

int n,m;
int a[1001][1001];
int chuaXet[1001][1001];
int dx[] = {1,1,0,-1,-1,-1, 0,1};
int dy[] = {0,1,1, 1, 0,-1,-1,-1};

struct Point{
	int x,y;
};

void init(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			chuaXet[i][j] = 1;
		}
	}
}

bool anToan(int x,int y){
	return(x>=0 && x<n && y>=0 && y<m && a[x][y] && chuaXet[x][y]);
}

void checkBFS(int x,int y){
	queue<Point> myQ;
	Point a = {x,y};
	myQ.push(a);
	chuaXet[x][y] = false;
	while(!myQ.empty()){
		Point b = myQ.front();
		myQ.pop();
		for(int i=0;i<8;i++){
			int next_X = b.x + dx[i];
			int next_Y = b.y + dy[i];
			if(anToan(next_X,next_Y)){
				chuaXet[next_X][next_Y] = false;
				a.x = next_X;
				a.y = next_Y;
				myQ.push(a);
			}
		}
	}
}

int countIslands(){
	int res = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] && chuaXet[i][j]){
				checkBFS(i,j);
				res++;
			}
		}
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		cout<<countIslands()<<"\n";
	}
	return 0;
}

