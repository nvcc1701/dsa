#include<bits/stdc++.h>
using namespace std;

// contest8/bai16xoayHinhVuong

vector<int> xoayPhai(vector<int> &a){
	swap(a[1],a[4]);
	swap(a[2],a[4]);
	swap(a[4],a[5]);
	return a;
}

vector<int> xoayTrai(vector<int> &a){
	swap(a[0],a[3]);
	swap(a[1],a[3]);
	swap(a[3],a[4]);
	return a;
}

bool equal(vector<int> a,vector<int> b){
	for(int i=0;i<6;i++){
		if(a[i] != b[i]){
			return false;
		}
	}
	return true;
}

int xoayHinhVuong(vector<int> a, vector<int> b){
	queue<vector<int> > myQ;
	myQ.push(a);
	int steps = 0;
	while(!myQ.empty()){
		int s = myQ.size();
		while(s--){
			vector<int> c = myQ.front();
			myQ.pop();
			if(equal(c,b)){
				return steps;
			}
			vector<int> d = c;
			myQ.push(xoayPhai(c));
			myQ.push(xoayTrai(d));
		}
		steps++;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		vector<int> a;
		vector<int> b;
		for(int i=0;i<6;i++){
			cin>>x;
			a.push_back(x);
		}
		for(int i=0;i<6;i++){
			cin>>x;
			b.push_back(x);
		}
		cout<<xoayHinhVuong(a,b)<<"\n";
	}
	return 0;
}

