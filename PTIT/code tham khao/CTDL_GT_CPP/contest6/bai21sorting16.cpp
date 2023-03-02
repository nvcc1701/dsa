#include<bits/stdc++.h>
using namespace std;

// contest6/bai21sorting16

bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.second == b.second){
		return a.first<b.first;
	}
	return a.second>b.second;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<int,int> myMap;
		int x;
		for(int i=0;i<n;i++){
			cin>>x;
			myMap[x]++;		
		}
		map<int,int> :: iterator it;
		vector<pair<int,int> > myVec;
		for(it=myMap.begin();it!=myMap.end();it++){
			myVec.push_back(make_pair(it->first,it->second));
		}
		sort(myVec.begin(),myVec.end(),cmp);
		for(int i=0;i<myVec.size();i++){
			for(int j=0;j<myVec[i].second;j++){
				cout<<myVec[i].first<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}

