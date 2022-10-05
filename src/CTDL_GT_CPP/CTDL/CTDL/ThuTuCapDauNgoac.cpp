#include<bits/stdc++.h>
#include<string>
using namespace std;
main(){
	int t; cin>>t;
	int n = t+1;
	while(n--){
		string s;
		cin.ignore();
		getline(cin,s);
		int dem=0, m;
		for(int i=0; i<s.size(); i++){
			if(s[i] == '('){
				dem++;
				cout<<dem<<" ";
				m=dem;
			}
			
			if(s[i] == ')'){
				cout<<m<<" ";
				m--;
			}
		}
		cout<<endl;
	}
}

