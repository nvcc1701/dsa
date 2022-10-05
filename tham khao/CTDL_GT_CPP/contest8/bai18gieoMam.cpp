#include<bits/stdc++.h>
using namespace std;

// contest8/bai18gieoMam

int a[501][501];
int n,m;
queue<pair<int,int> > myQ;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

void init(){
	cin>>n>>m;
	while(!myQ.empty()){
		myQ.pop();
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] == 2){
				myQ.push(make_pair(i,j));
			}
		}
	}
}

bool check(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] == 1){
				return false;
			}
		}
	}
	return true;
}

bool diDuoc(int x,int y){
	return (x>=0 && x<n && y>=0 && y<m && a[x][y] == 1);
}

int gieoMam(){
	int days = 0;
	if(myQ.empty()){
		return days;
	}
	while(!myQ.empty()){
		int s = myQ.size();
		if(check()){
			return days;
		}
		while(s--){
			pair<int,int> u = myQ.front();
			myQ.pop();
			for(int i=0;i<4;i++){
				if(diDuoc(u.first+dx[i],u.second+dy[i])){
					myQ.push(make_pair(u.first+dx[i],u.second+dy[i]));
					a[u.first+dx[i]][u.second+dy[i]] = 2;
				}
			}
		}
		days++;
	}
	return -1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		cout<<gieoMam()<<"\n";
	}
	return 0;
}

