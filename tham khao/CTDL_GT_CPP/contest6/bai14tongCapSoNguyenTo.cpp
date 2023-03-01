#include<bits/stdc++.h>
using namespace std;

// contest6/bai14tongCapSoNguyenTo

void sangNT(int n){
	if(n<4){
		cout<<-1<<"\n";
	}
	else{
		bool check[n+1];
		check[0] = check[1] = false;
		for(int i=2;i<=n;i++){
			check[i] = true;
		}
		for(int i=2;i<=sqrt(n);i++){
			if(check[i]){
				for(int j=i*2;j<=n;j += i){
					check[j] = false;
				}
			}
		}
		bool ok = false;
		for(int i=2;i<=n/2;i++){
			if(check[i] && check[n-i]){
				cout<<i<<" "<<n-i<<"\n";
				ok = true;
				break;
			}
		}
		if(!ok){
			cout<<-1<<"\n";
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		sangNT(n);
	}
	return 0;
}

