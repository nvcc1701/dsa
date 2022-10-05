#include<bits/stdc++.h>
using namespace std;

// contest6/bai8sorting8

vector<int> x;
vector<int> y;

int sorting8(vector<int> noOfY){
	int res = 0;
	vector<int> :: iterator upper;
	for(int i=0;i<x.size();i++){
		if(x[i] == 0){
			continue;
		}
		else if(x[i] == 1){
			res += noOfY[0];
			continue;
		}
		upper = upper_bound(y.begin(),y.end(),x[i]);
		res += y.size() - (upper - y.begin());
		res += noOfY[0] + noOfY[1];
		if(x[i] == 2){
			res -= (noOfY[3] + noOfY[4]);
		}
		if(x[i] == 3){
			res += noOfY[2];
		}
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a;
		x.clear(),y.clear();
		for(int i=0;i<n;i++){
			cin>>a;
			x.push_back(a);
		}
		for(int i=0;i<m;i++){
			cin>>a;
			y.push_back(a);
		}
		sort(y.begin(),y.end());
		vector<int> noOfY(5,0);
		for(int i=0;i<y.size();i++){
			if(y[i]>=5) break;
			else{
				noOfY[y[i]]++;
			}
		}
		cout<<sorting8(noOfY)<<"\n";
	}
	return 0;
}
