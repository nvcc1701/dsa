#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;


bool sortByAppear(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b){
	return (a.second.first > b.second.first);
}

bool sortByIndex(pair<int,pair<int,int> > a,pair<int,pair<int,int> > b){
//	return (a.second.second < b.second.second);
	if(a.second.first == b.second.first) return (a.second.second < b.second.second);
}

bool sortAll(pair<int,pair<int, int> > a, pair<int,pair<int, int> > b){
	if (a.second.first > b.second.first) return true;
	else if(a.second.first == b.second.first){
		if(a.second.second < b.second.second){
			return true;
		}
		else return false;
	}
	return false;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long x;
		int n;
		cin>>n;
		
		map<int,pair<int,int> > myMap;
		for(int i=1;i<=n;i++){
			cin>>x;
			myMap[x].first++;
			if(myMap[x].second == 0) myMap[x].second = i;
		}
		vector<pair<int,pair<int,int> > > myVec;
		map<int,pair<int,int> > :: iterator it;
		for(it=myMap.begin();it!=myMap.end();it++){
//			myVec.push_back({it->first,it->second});
			myVec.push_back(make_pair(it->first,it->second));
		}
//		for(int i=0;i<myVec.size();i++){
//			cout<<"Gia tri: "<<myVec[i].first<<"--So luong: "<<myVec[i].second.first<<"--Vi tri xuat hien dau tien: "<<myVec[i].second.second<<"\n";
//		}
//		sort(myVec.begin(),myVec.end(),sortByIndex);
//		sort(myVec.begin(),myVec.end(),sortByAppear);
		sort(myVec.begin(),myVec.end(),sortAll);
//		for(int i=0;i<myVec.size();i++){
//			cout<<"Gia tri: "<<myVec[i].first<<"--So luong: "<<myVec[i].second.first<<"--Vi tri xuat hien dau tien: "<<myVec[i].second.second<<"\n";
//		}
		for(int i=0;i<myVec.size();i++){
			for(int j=0;j<myVec[i].second.first;j++){
				cout<<myVec[i].first<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}

