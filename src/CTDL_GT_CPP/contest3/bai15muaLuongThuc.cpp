#include<bits/stdc++.h>
using namespace std;

//contest3/bai15muaLuongThuc

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s,m;
		cin>>n>>s>>m;
		int tongLuongThucCan = s*m;
		int tongLuongThucMua = 0;
		int soNgayAn = s;
		while(soNgayAn>=7){
			soNgayAn-=7;
			tongLuongThucMua += n*6;
		}
		tongLuongThucMua += n*soNgayAn;
		if(tongLuongThucMua<tongLuongThucCan){
			cout<<-1<<"\n";
		}
		else{
			int soNgayDuocMua = 0;
			int t = 1;
			tongLuongThucMua = 0;
			while(tongLuongThucMua<tongLuongThucCan){
				if(t%7==0){
					t++;
					continue;
				}
				else{
					tongLuongThucMua += n;
					soNgayDuocMua++;
					t++;
				}
			}
			cout<<soNgayDuocMua<<"\n";
		}
	}
	return 0;
}

