#include<bits/stdc++.h>
using namespace std;
long long m = 1e9+7;
main(){
	int t; cin>>t;
	while(t--){
		long long sum=0;
		int n;
		cin>>n;
		long long a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0; i<n; i++){
			sum += a[i]*i;
			sum %= m;
		}
		cout<<sum<<endl;
	}
}
