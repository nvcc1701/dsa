#include<bits/stdc++.h>
using namespace std;
int n;
main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		n=s.size();
		int i=n-1;
		while(i>=0 && s[i]=='0') i--;
		if(i<0){
			for(int j=0; j<n; j++){
				cout<<"1";
			}
			cout<<endl;
		}
		else{
			s[i]='0';
			for(int j=i+1; j<n; j++){
				s[j]='1';
			}
			for(int i=0; i<n; i++){
				cout<<s[i];
			}
			cout<<endl;
		}
	}
}
