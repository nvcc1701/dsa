#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
main(){
	int t; cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		long long s=1;
		if(k>n) cout<<0<<endl;
		else{
			for(int i=n-k+1; i<=n ; i++){
				s *= i;
				s %= m;
			}
			cout<<s<<endl;
		}
	} 
}
