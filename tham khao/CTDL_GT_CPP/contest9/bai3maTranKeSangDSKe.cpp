#include<bits/stdc++.h>
using namespace std;

// contest9/bai3maTranKeSangDSKe

int a[1000][1000];
int n;


void maTranKeSangDSKe(){
	cin>>n;
	vector<pair<int,int> > vec;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]){
//				vec.push_back(make_pair(i+1,j+1));
				cout<<j+1<<" ";
			}
		}
		cout<<"\n";
	}
//	for(int i=vec.size()-1;i>=0;i--){
//		cout<<vec[i].first<<" "<<vec[i].second<<"\n";
//	}
}


int main(){
//	int t;
//	cin>>t;
//	while(t--){
		maTranKeSangDSKe();
//	}
	return 0;
}

