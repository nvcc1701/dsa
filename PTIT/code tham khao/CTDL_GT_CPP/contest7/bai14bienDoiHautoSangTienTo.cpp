#include<bits/stdc++.h>
using namespace std;

// contest7/bai14bienDoiHautoSangTienTo

bool toanTu(char c){
	return (c == '+' || c == '-' || c == '*' || c == '/' || c =='^');
}

string hautoSangTienTo(string exp){
	stack<string> myS;
	string toanHang1,toanHang2,temp;
	for(int i=0;i<exp.length();i++){
		if(toanTu(exp[i])){
			toanHang2 = myS.top();
			myS.pop();
			toanHang1 = myS.top();
			myS.pop();
			temp = exp[i] +toanHang1 + toanHang2;
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
		cout<<hautoSangTienTo(exp)<<"\n";
	}
	return 0;
}

