#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[30];
bool chuaDung[30];

void init(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		chuaDung[i] = true;
	}
}

bool tapConTongBangSum(int tongTapCon, int sum){
	if(tongTapCon == sum){
		return true;
	}
	for(int i=n;i>=0;i--){
		if(chuaDung[i]){
			chuaDung[i] = false;
			if(tongTapCon+a[i] <= sum){
				if(tapConTongBangSum(tongTapCon+a[i],sum)){
					return true;
				}
			}
		}
		chuaDung[i] = true;
	}
	return false;
}

bool kiemTraChiaKTapConTongBangNhau(){
	if(k==1){
		return true;
	}
	if(k>n){
		return false;
	}
	int sum = 0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	if(sum%k!=0){	
		return false;
	}
	else{
		sum/=k; // tong mot tap con
		cout<<sum<<"\n";
		for(int i=0;i<k-1;i++){
			if(!tapConTongBangSum(0,sum)){
				return false;
			}
		}
		return true;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		if(kiemTraChiaKTapConTongBangNhau()){
			cout<<"1\n";
		}
		else cout<<"0\n";
	}
	return 0;
}
