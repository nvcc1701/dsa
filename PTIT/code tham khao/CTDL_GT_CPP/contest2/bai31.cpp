#include<bits/stdc++.h>
using namespace std;

int k,m,n;
char a[4][4];
bool daDiQua[4][4];
string dic[101];

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

bool timChu(int x,int y,string &s){
	daDiQua[x][y] = true;
	s += a[x][y];
	if(trongTuDien(s)){
		cout<<s<<" ";
	}
	for(int hang = x-1;hang<=x+1;hang++){
		for(int cot = y-1;cot<=y+1;cot++){
			if(diDuoc(hang,cot)){
				timChu(hang,cot,s);
			}
		}
	}
	s.erase(s.length()-1);
	daDiQua[x][y] = false;
}

bool solution(){
	init();
	string s="";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			timChu(i,j,s);
		}
	}
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		solution();
		cout<<"\n";
	}
	return 0;
}

