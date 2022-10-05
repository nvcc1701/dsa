#include<bits/stdc++.h>
#include<vector>
using namespace std;

int n;
int a[11][11];
int dx[]={1,0};
int dy[]={0,1};
vector<vector<string> > res;
vector<string> r;
bool check;

void init(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	res.clear();
	r.clear();
	check = false;
}

bool anToan(int x,int y){
	if(x>=0 && x<n && y>=0 && y<n && a[x][y]==1){
		return true;
	}
	return false;
}

void display(){
	for(int i=0;i<res.size();i++){
		for(int j=0;j<res[i].size();j++){
			cout<<res[i][j];
		}
		cout<<" ";
	}
	cout<<"\n";
}

void Try(int x,int y){
	if(x==n-1 && y==n-1){
		if(a[x][y]==1){
			check = true;
			res.push_back(r);
			return;
		}
		return;
	}
	for(int j=0;j<=1;j++){
		if(anToan(x+dx[j],y+dy[j])){
			if(j==0){
				r.push_back("D");
				Try(x+dx[j],y+dy[j]);
				r.pop_back();
			}
			else{
				r.push_back("R");
				Try(x+dx[j],y+dy[j]);
				r.pop_back();
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		if(a[0][0]==0){
			cout<<"-1\n";
		}
		else{
			Try(0,0);
			if(!check){
				cout<<"-1\n";
			}
			else{
				display();
			}
		}
	}
	return 0;
}

