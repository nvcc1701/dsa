#include<bits/stdc++.h>
using namespace std;

// contest8/bai15diChuyenTrongMaTran
int arr[1000][1000];

int diChuyenTrongMaTran(int n,int m){
	int steps = 0;
	bool freecheck[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			freecheck[i][j] = true;
		}
	}
	queue<pair<int,int> > myQ;
	myQ.push(make_pair(0,0));
	while(!myQ.empty()){
		int s = myQ.size();
		while(s--){
			pair<int,int> a = myQ.front();
			myQ.pop();
			if(!freecheck[a.first][a.second]){
				continue;
			}
			if(a.first == n-1 && a.second == m-1){
				return steps;
			}
			freecheck[a.first][a.second] = false;
			if(a.first + arr[a.first][a.second] < n){
				myQ.push(make_pair(a.first+arr[a.first][a.second],a.second));
			}
			if(a.second + arr[a.first][a.second] < m){
				myQ.push(make_pair(a.first,a.second+arr[a.first][a.second]));
			}
		}
		steps++; 
	}
	return -1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
			}
		}
		cout<<diChuyenTrongMaTran(n,m)<<"\n";
	}
	return 0;
}

