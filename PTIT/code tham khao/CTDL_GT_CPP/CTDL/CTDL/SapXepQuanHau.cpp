#include<bits/stdc++.h>
using namespace std;
int n, res;
bool h[11], c[11], ng[22], xu[22];
void Try(int i){
	for(int j=1; j<=n; j++){
		if(!h[j] && !c[j] && !ng[i+j-1] && !xu[i-j+n]){
			h[j] = c[j] = ng[i+j-1] = xu[i-j+n] = true;
			if(i==n){
				res++;
			}
			else{
				Try(i+1);
			}
			h[j] = c[j] = ng[i+j-1] = xu[i-j+n] = false;
		}
	}
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		Try(1);
		cout<<res<<endl;
	}
}
