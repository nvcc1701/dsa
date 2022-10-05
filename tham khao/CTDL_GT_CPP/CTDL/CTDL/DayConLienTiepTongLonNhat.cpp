#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n; cin>>n;
		int a[100];
		bool ktra = false;
		int M;
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(a[i]>0) ktra = true;
			if(i==0) M=a[0];
			else{
				if(M<a[i]) M=a[i];
			}
		}
		if(!ktra) cout<<M<<endl;
		else{
			int sum=0, res=0;
			for(int i=0; i<n; i++){
				if(sum+a[i] < 0){
					sum =0;
					continue;
				}
				sum += a[i];
				if(res < sum) res = sum;
			}
			cout<<res<<endl;
		}
	}
}
