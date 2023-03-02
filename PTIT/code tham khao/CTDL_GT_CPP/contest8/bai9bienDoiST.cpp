#include<bits/stdc++.h>
using namespace std;

// contest8/bai9bienDoiST

struct Point{
	int giaTri;
	int soLan;
};

long long bienDoiST(int s,int t){
	queue<Point> myQ;
	Point n = {s,0};
	myQ.push(n);
	set<int> xuatHien;
	while(!myQ.empty()){
		Point m = myQ.front();
		myQ.pop();
		if(m.giaTri == t){
			return m.soLan;
		}
		if(m.giaTri*2 == t || m.giaTri-1 == t){
			return m.soLan+1;
		}
		if(xuatHien.find(m.giaTri*2) == xuatHien.end() && m.giaTri<t){			// m.giatri*2 chua xuat hien trong set
			n.giaTri = m.giaTri*2;
			n.soLan = m.soLan + 1;
			myQ.push(n);
			xuatHien.insert(m.giaTri*2);
		}
		if(m.giaTri>=1 && xuatHien.find(m.giaTri-1) == xuatHien.end()){	// m.giatri con lon hon 1 va chua xuat hien trong set
			n.giaTri = m.giaTri - 1;
			n.soLan = m.soLan + 1;
			myQ.push(n);
			xuatHien.insert(m.giaTri-1);
		}
	}
}

int main(){
	int n;
	cin>>n;
	while(n--){
		int s,t;
		cin>>s>>t;
		cout<<bienDoiST(s,t)<<"\n";
	}
	return 0;
}

