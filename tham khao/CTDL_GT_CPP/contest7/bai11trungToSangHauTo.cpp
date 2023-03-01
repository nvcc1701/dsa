#include<bits/stdc++.h>
using namespace std;

// contest7/bai11trungToSangHauTo
// infix to postfix

bool toanHang(char c){
	return (c>='A' && c<='Z') || (c>='a' && c<='z');
}

bool toanTu(char c){
	return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int trongLuongToanTu(int toanTu){
	if(toanTu == '+' || toanTu == '-'){
		return 1;
	}
	else if(toanTu == '*' || toanTu == '/'){
		return 2;
	}
	else if(toanTu == '^'){
		return 3;
	}
	else return 0;
}


string trungToSangHauTo(string exp){
	string out = "";
	stack<char> myS;
	for(int i=0;i<exp.length();i++){
		if(toanHang(exp[i])){
			out += exp[i];
		}
		else if(exp[i] == '('){
			myS.push('(');
		}
		else if(toanTu(exp[i])){
			while(!myS.empty() && trongLuongToanTu(exp[i])<=trongLuongToanTu(myS.top())){
				out += myS.top();
				myS.pop();
			}
			myS.push(exp[i]);
		}
		else if(exp[i] == ')'){
			while(myS.top() != '(' && !myS.empty()){
				out += myS.top();
				myS.pop();
			}
			if(!myS.empty() && myS.top() == '('){
				myS.pop();
			}
		}
	}
	while(!myS.empty()){
		if(myS.top() != '('){
			out += myS.top();
		}
		myS.pop();
	}
	return out;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string exp;
		cin>>exp;
		string out = trungToSangHauTo(exp);
		cout<<out<<"\n";
	}
	return 0;
}

