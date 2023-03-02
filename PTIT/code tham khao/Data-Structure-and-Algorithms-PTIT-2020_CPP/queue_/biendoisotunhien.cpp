#include<bits/stdc++.h>
using namespace std;

// contest8/bai10bienDoiSoTuNhien

struct Point {
	int giaTri;
	int soLan;
};

int bienDoiSoTuNhien(int n){
	queue<Point> myQ;
	Point x = {n,0};
	myQ.push(x);
	set<int> xuatHien;
	while(!myQ.empty()){
		Point y = myQ.front();
		myQ.pop();
		if(y.giaTri == 1){
			return y.soLan;
		}
		if(y.giaTri - 1 == 1){
			return y.soLan + 1;
		}
		if(xuatHien.find(y.giaTri - 1) == xuatHien.end()){						// y.giaTri - 1 chua xuat hien trong set
			xuatHien.insert(y.giaTri);
			x.giaTri = y.giaTri - 1;
			x.soLan = y.soLan + 1;
			myQ.push(x);
		}
		for(int i=sqrt(y.giaTri);i>=2;i--){
			if(y.giaTri%i==0 && xuatHien.find(y.giaTri/i) == xuatHien.end()){	// y.giaTri/i chua xuat hien trong set
				xuatHien.insert(y.giaTri/i);
				x.giaTri = y.giaTri/i;
				x.soLan = y.soLan + 1;
				myQ.push(x);
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<bienDoiSoTuNhien(n)<<"\n";
	}
	return 0;
}

