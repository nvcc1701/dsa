#include<bits/stdc++.h>
using namespace std;

// contest10/bai4timDuong

char vec[501][501];
int n,m;
int sx,sy,tx,ty;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
int quayXe[501][501];

void init(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>vec[i][j];
			if(vec[i][j] == 'S'){
				sx = i;
				sy = j;
			}
			if(vec[i][j] == 'T'){
				tx = i;
				ty = j;
			}
		}
	}
}

bool timDuong(){
	queue<pair<int,int> > myQ;
	myQ.push(make_pair(sx,sy));
	memset(quayXe,0,sizeof(quayXe));
	quayXe[sx][sy] = 1;
	while(!myQ.empty()){
		pair<int,int> a = myQ.front();
		myQ.pop();
		int hang = a.first;
		int cot = a.second;
		if(quayXe[hang][cot] > 4){
			return false;
		}
		if(hang == tx && cot == ty){
			return true;
		}
		int quay = quayXe[hang][cot] + 1;
		for(int i=hang+1;i<n;i++){	// xuong duoi
			if(vec[i][cot] == '*'){
				break;
			}
			if(quayXe[i][cot] == 0){
				quayXe[i][cot] = quay;
				myQ.push(make_pair(i,cot));
			}
		}
		for(int i=hang-1;i>=0;i--){	// len tren
			if(vec[i][cot] == '*'){
				break;
			}
			if(quayXe[i][cot] == 0){
				quayXe[i][cot] = quay;
				myQ.push(make_pair(i,cot));
			}
		}
		for(int j = cot+1;j<m;j++){	// sang phai
			if(vec[hang][j] == '*'){
				break;
			}
			if(quayXe[hang][j] == 0){
				quayXe[hang][j] = quay;
				myQ.push(make_pair(hang,j));
			}
		}
		for(int j = cot-1;j>=0;j--){	// sang trai
			if(vec[hang][j] == '*'){
				break;
			}
			if(quayXe[hang][j] == 0){
				quayXe[hang][j] = quay;
				myQ.push(make_pair(hang,j));
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		if(timDuong()){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}

