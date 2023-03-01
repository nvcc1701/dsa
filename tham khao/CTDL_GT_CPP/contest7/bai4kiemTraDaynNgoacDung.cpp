#include<bits/stdc++.h>
using namespace std;

// contest7/bai4kiemTraDaynNgoacDung

bool ngoacMo(char c){
	return (c == '(' || c == '{' || c == '[');
}

bool kiemTraDayNgoacDung(string str){
	stack<char> myS;
	for(int i=0;i<str.length();i++){
		if(ngoacMo(str[i])){
			myS.push(str[i]);
		}
		else if(!myS.empty() && ((str[i] == ')' && myS.top() == '(') || (str[i]==']' && myS.top() == '[') || (str[i]=='}' && myS.top() == '{'))){
			myS.pop();
		}
		else return false;
	}
	if(myS.empty()){
		return true;
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		if(kiemTraDayNgoacDung(str)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}

