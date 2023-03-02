#include<bits/stdc++.h>
using namespace std;

// contest8/bai17diChuyenTranhVatCan

int diChuyenTranhVatCan(string str[],int n,int a,int b,int c,int d){
	queue<pair<int,pair<int,int> > > myQ;
	myQ.push(make_pair(0,make_pair(a,b)));
	set<pair<int,int> > myS;
	myS.insert(make_pair(a,b));
	while(!myQ.empty()){
		pair<int,pair<int,int> > x = myQ.front();
		myQ.pop();
		int i = x.second.first; // check xuong duoi
		int j = x.second.second; // check sang phai
		int h = i; 
		int mh = i; // check len tren
		int canh = j;
		int mc = j; // check sang trai
		int ht = i;
		if(i == c && j == d){
			return x.first;
		}
		while(i<n-1){ // xuong duoi
			if(str[i+1][j] == '.' && myS.find(make_pair(i+1,j)) == myS.end()){
				myQ.push(make_pair(x.first+1,make_pair(i+1,j)));
				myS.insert(make_pair(i+1,j));
				i++;
			}
			else{
				break;
			}
		}
		while(j<n-1){ // sang trai
			if(str[h][j+1] == '.' && myS.find(make_pair(h,j+1)) == myS.end()){
				myQ.push(make_pair(x.first+1,make_pair(h,j+1)));
				myS.insert(make_pair(h,j+1));
				j++;
			}
			else{
				break;
			}
		}
		while(mh>0){ // len tren
			if(str[mh-1][canh] == '.' && myS.find(make_pair(mh-1,canh)) == myS.end()){
				myQ.push(make_pair(x.first+1,make_pair(mh-1,canh)));
				myS.insert(make_pair(mh-1,canh));
				mh--;
			}
			else{
				break;
			}
		}
		while(mc>0){
			if(str[ht][mc-1] == '.' && myS.find(make_pair(ht,mc-1)) == myS.end()){
				myQ.push(make_pair(x.first+1,make_pair(ht,mc-1)));
				myS.insert(make_pair(ht,mc-1));
				mc--;
			}
			else{
				break;
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	string str[101];
	for(int i=0;i<n;i++){
		cin>>str[i];
	}
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<diChuyenTranhVatCan(str,n,a,b,c,d)<<"\n";
	return 0;
}

