#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
	map<int,int> myMap;
	myMap.insert(pair<int,int>(5,3));
	myMap.insert(pair<int,int>(4,6));
	myMap.insert(pair<int,int>(3,7));
	myMap.insert(pair<int,int>(2,9));
	for(map<int,int> ::iterator it=myMap.begin();it!=myMap.end();it++){
		cout<<it->first<<"-------"<<it->second<<"\n";
	}
	return 0;
}

