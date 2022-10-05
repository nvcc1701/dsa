#include<bits/stdc++.h>
using namespace std;
int n; 
	
main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		int d4 = n/4 +1;
		int d7 = n/7 +1;
		int d = 0;
		for(int i=0; i<=d4; i++){
			for(int j=0; j<=d7; j++){
				if((j*7+i*4)==n){
					d=1;
					for(int k=0; k<i; k++){
						cout<<4;
					}
					for(int l=0; l<j; l++){
						cout<<7;
					}
					break;
				}
			}
			if(d==1) break;
		}
		if(d==0) cout<<-1;
		cout<<endl;
	}
}
