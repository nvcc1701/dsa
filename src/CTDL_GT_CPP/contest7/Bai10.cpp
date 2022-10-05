#include<bits/stdc++.h>
using namespace std;

const int MAX_CHAR=26;

bool adjSign(string s,int i){
	if(i==0) return true;
	if(s[i-1]=='-') return false;
	return true;
}

void eval(string s,vector<int>& v,bool add){
	stack<bool> stk;
	stk.push(true);
	for(int i=0;i<s.length();i++){
		if(s[i]=='+' || s[i]=='-') continue;
		if(s[i]=='('){
			if(adjSign(s,i)) stk.push(stk.top());
			else stk.push(!stk.top());
		}
		else if(s[i]==')'&&!stk.empty()) stk.pop();
		else{
			if(stk.top()){
				v[s[i]-'a']+=(adjSign(s,i) ? add ? 1 : -1 : add ? -1 : 1);
			}
			else{
				v[s[i]-'a']+=(adjSign(s,i) ? add ? -1 : 1 : add ? 1 : -1);
			}
		}
	}
}

bool areSame(string s1,string s2){
	vector<int> v(MAX_CHAR,0);
	eval(s1,v,true);
	eval(s2,v,false);
	for(int i=0;i<MAX_CHAR;i++) if(v[i]!=0) return false;
	return true;
//	for(int i=0;i<MAX_CHAR;i++) cout<<v[i]<<" ";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		if(areSame(s1,s2)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
}
