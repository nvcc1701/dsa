#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[25];
bool chuaDung[25];
int sum;
bool check;

void Try(int tongTapCon,int soTapCon){
	if(check){
		return;
	}
	if(soTapCon==k){
		check = true;
		return;
	}
	for(int i=0;i<n;i++){
		if(chuaDung[i]){
			chuaDung[i] = false;
			if(tongTapCon==sum){
				Try(0,soTapCon+1);
				return;
			}
			if(tongTapCon>sum){
				return;
			}
			else Try(tongTapCon+a[i],soTapCon);
		}
		chuaDung[i] = true;
	}
}

void sulution(){
	cin>>n>>k;
	sum = 0;
	check = false;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
		chuaDung[i] = true;
	}
	if(sum%k!=0){
		cout<<0<<endl;
	}
	else{
		sum/=k;
		Try(0,0);
		if(check){
			cout<<1<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		sulution();
	}
	return 0;
}

