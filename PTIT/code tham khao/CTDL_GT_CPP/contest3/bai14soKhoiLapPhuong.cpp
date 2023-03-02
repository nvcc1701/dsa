#include<bits/stdc++.h>
using namespace std;

// contest3/bai14soKhoiLapPhuong

vector<long long> khoi;

void init_Khoi(long long n){
	khoi.clear();
	for(long long i=1;i*i*i<=n;i++){
		khoi.push_back(i*i*i);
	}
}

bool check(long long n,long long x){
	while(n){
		if(x%10==n%10){
			x/=10;
			if(x==0){
				return true;
			}
		}
		n/=10;
	}
	return false;
}	

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		init_Khoi(n);
		bool ok = false;
		for(long long i=khoi.size()-1;i>=0;i--){
			 if(check(n,khoi[i])){
			 	cout<<khoi[i];
			 	ok = true;
			 	break;
			 }
		}
		if(!ok){
			cout<<"-1";
		}
		cout<<"\n";
	}
	return 0;
}

