#include<bits/stdc++.h>
using namespace std;

// contest7/bai12bienDoiTienToSangTrungTo

bool toanTu(char c){
	return (c == '+' || c == '-' || c == '*' || c == '/' || c =='^');
}

string tienToSangTrungTo(string exp){
	stack<string> myS;
	string toanHang1, toanHang2;
	string temp;
	for(int i=exp.length()-1;i>=0;i--){
		if(toanTu(exp[i])){
			toanHang1 = myS.top();
			myS.pop();
			toanHang2 = myS.top();
			myS.pop();
			temp = '(' + toanHang1 + exp[i] + toanHang2 + ')';
			myS.push(temp);
		}
		else{
			temp = exp[i];
			myS.push(temp);
		}
	}
	string res = myS.top();
	myS.pop();
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string exp;
		cin>>exp;
		cout<<tienToSangTrungTo(exp)<<"\n";
	}
	return 0;
}

