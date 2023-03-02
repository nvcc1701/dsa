#include<bits/stdc++.h>
using namespace std;

//contest3/bai18soMayMan

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string res;
		int soLuong7;
		for(soLuong7=n/7;soLuong7>=0;soLuong7--){
			if((n-soLuong7*7) % 4 == 0){
				break;
			}
		}
		if(soLuong7<0 && (n-7*soLuong7)!=0){
			cout<<"-1";
		}
		else{
			for(int i=1;i<=(n-soLuong7*7)/4;i++){
				res.push_back(4+'0');
			}
			for(int i=soLuong7;i>=1;i--){
				res.push_back(7+'0');
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}

