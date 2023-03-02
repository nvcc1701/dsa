#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		long long n;
		cin>>n;
		unsigned long long k;
		cin>>k;
		long long a[n+5];
		for(int i=0; i<n; i++)
			cin>>a[i];
		unsigned long long s=0;
		int d=0;
		for(int i=0; i<n-1; i++){
			for(int j=i; j<n; j++){
				s+=a[j];
				if(s==k){
					d=1;
					break;
				}
				if(s>k) break;
			}
			if(d=1) break;
			else s=0;
		}
		if(d==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
