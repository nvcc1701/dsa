#include<iostream>
#include<string>
#include<cstdlib>
#include<map>
#include<vector>
using namespace std;

bool notInArray(int x,int b[],int m ){
	for(int i=0;i<m;i++){
		if(x==b[i]){
			return false;
		}
	}
	return true;
}

int soLan(int n, int a[],int x){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			count ++;
		}
	}
	return count;
}

bool kiemTra(int a){
	while(a!=0){
		int n = a%10;
		if( n!=2 && n!=3 &&n!=5 &&n!=7){
			return false;
		}
		a/=10;
	}
	return true;
}

int main()
{
	int x;
	int a[10000];
	int soLuong=0;
	while(cin>>x){
		a[soLuong++] = x;
	}
	int b[soLuong];
	int m=0;
	for(int i=0;i<soLuong;i++){
		if(kiemTra(a[i]) && notInArray(a[i],b,m)){
			b[m++]=a[i];
		}
	}
//	int count[m];
	for(int i=0;i<m;i++){
//		count[i]=soLan(soLuong,a,b[i]);
		cout<<b[i]<<' '<<soLan(soLuong,a,b[i])<<'\n';
	}
	
//	map<int,pair<int,int> > myMap;
//	for(int i=0;i<m;i++){
//		myMap[b[i]].first++;
//		myMap[b[i]].second = count[i];
//	}
//	map<int,pair<int,int> > :: iterator it;
//	for(it)
	return 0;
}

