#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		bool ok;
		stack<char> stk;
		for(int i=0; i<s.size(); i++){
			if(s[i] == ')'){
				ok=true;
				char top = stk.top();
				stk.pop();
				while(top != '('){
					if(top=='+' || top=='-' || top=='*' || top=='/')
						ok=false;
					top=stk.top(); 
					stk.pop();
				}
				if(ok) break;
			}
			else 
				stk.push(s[i]);
		}
		if(ok) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
