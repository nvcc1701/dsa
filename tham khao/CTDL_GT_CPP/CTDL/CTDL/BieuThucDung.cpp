#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		int res = 0;
		stack<int> stk;
		stk.push(-1);
		for(int i =0; i< s.size(); i++){
			if(s[i]=='()') stk.push(i);
			else{
				stk.pop();
				if(stk.size()>0) res=max(res, i-stk.top());
				if(stk.size()==0) stk.push(i);
			}
		}
		cout<<res<<endl;
	}
}
