#include<bits/stdc++.h>
using namespace std;

int k,m,n;
char a[4][4];
bool daDiQua[4][4];
string dic[101];
int dx[] = {1,1,0,-1,-1,-1,0,1};
int dy[] = {0,1,1,1,0,-1,-1,-1};
string res;
bool check;

void init(){
	cin>>k>>m>>n;
	for(int i=0;i<k;i++){
		dic[i].clear();
		cin>>dic[i];
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			daDiQua[i][j] = false;
		}
	}
	res.clear();
	check = false;
}

bool trongTuDien(string &s){
	for(int i=0;i<k;i++){
		if(s.compare(dic[i])==0){
			return true;
		}
	}
	return false;
}

bool diDuoc(int x,int y){
	return (x>=0 && x<m && y>=0 && y<n && !daDiQua[x][y]);
}

void timChu(int x,int y,string &res){
	int next_x,next_y;
	daDiQua[x][y] = true;
	res += a[x][y];
	if(trongTuDien(res)){
		cout<<res<<" ";
		check = true;
	}
	for(int t=0;t<8;t++){
		next_x = x + dx[t];
		next_y = y + dy[t];
		if(diDuoc(next_x,next_y)){
			timChu(next_x,next_y,res);
		}
	}
	res.erase(res.length()-1);
	daDiQua[x][y] = false;
}

bool ketQua(){
	init();
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			timChu(i,j,res);
		}
	}
	if(!check){
		cout<<"-1";
	}
	cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		ketQua();
	}
	return 0;
}

