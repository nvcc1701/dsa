#include<bits/stdc++.h>
using namespace std;

// contest3/bai7phanSoDonVi

void phanTich(int tu,long long mau){
	if(tu==0 || mau==0){	// ket thuc chuong trinh
		return;
	}
	if(tu%mau==0){			// th tu>mau va tu%mau==0;
		cout<<tu/mau;	
		return;
	}
	if(mau%tu==0){			// th mau>tu va mau%tu==0;
		cout<<1<<"/"<<mau/tu;
		return;
	}
	if(tu>mau){				// th tu>mau va tu%mau!=0;
		cout<<tu/mau<<" + ";
		phanTich(tu%mau,mau);
	}
	int temp = mau/tu + 1;	// th mau>tu va mau%tu!=0;
	cout<<1<<"/"<<temp<<" + ";
	phanTich(tu*temp - mau,mau*temp);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int P;
		long long Q;
		cin>>P>>Q;
		phanTich(P,Q);
		cout<<"\n";
	}
	return 0;
}

