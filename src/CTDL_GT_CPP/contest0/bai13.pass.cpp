#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

bool check(int n){
	while(n){
		int a=n%10;
		n/=10;
		if(a!=2 && a!=3 && a!=5 && a!=7) return false;
	}
	return true;
}

bool compareByIndex(pair<int, pair<int,int> > a, pair<int, pair<int,int> > b ){
	return a.second.second<b.second.second;
}

int main()
{
	int x;
	map<int,pair<int,int> > myMap;
	int t=0;
	while(cin>>x){
		t++;
		if(check(x)){
			t++; // so luong 
			myMap[x].first++; //myMap[x] = x, myMap[x].first = so lan xuat hien chu so x;
			// myMap[x].first = myMap.second.first
			if(myMap[x].second==0) myMap[x].second=t; 
			// myMap[x].second = mymap.second.second = so thu tu ;
		}
	}
	vector< pair <int,pair<int,int> > > myVec;
	map<int,pair<int,int> > ::iterator it;
	for(it=myMap.begin();it!=myMap.end();it++){
//		cout<<it->first<<"----"<<it->second.first<<"--"<<it->second.second<<"\n";
//		myVec.push_back({it->first,it->second});
		myVec.push_back(make_pair(it->first,it->second));
	}
	sort(myVec.begin(),myVec.end(),compareByIndex);
	for(int i=0;i<myVec.size();i++){
		cout<<myVec[i].first<<" "<<myVec[i].second.first<<"\n";
	}
	return 0;
}

