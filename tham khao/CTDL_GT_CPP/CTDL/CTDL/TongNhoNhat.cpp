#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		long long a[n+5];
		for(long long i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		long long x=0, y=0;
		for(long long i=0; i<n; i++){
			if(i%2==0){
				x = x*10 + a[i];
			}
			else{
				y = y*10 + a[i];
			}
		}
		cout<<x+y<<endl;
	}
}
