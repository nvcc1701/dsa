#include<bits/stdc++.h>
using namespace std;

// contest7/bai17tinhGiaTriBieuThucTienTo

bool toanTu(char c){
	return (c == '+' || c == '-' || c == '*' || c == '/' || c =='^');
}

int tinh(int num1,int num2, char c){
	if(c == '+') return num1 + num2;
	if(c == '-') return num1 - num2;
	if(c == '*') return num1 * num2;
	if(c == '/') return num1 / num2;
}

int tinhGiaTriBieuThucTienTo(string exp){
	stack<int> myS;
	int num1, num2;
	for(int i=exp.length()-1;i>=0;i--){
		if(toanTu(exp[i])){
			num1 = myS.top();
			myS.pop();
			num2 = myS.top();
			myS.pop();
			myS.push(tinh(num1,num2,exp[i]));
		}
		else{
			myS.push(exp[i]-'0');
		}
	}
	int res = myS.top();
	myS.pop();
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string exp;
		cin>>exp;
		cout<<tinhGiaTriBieuThucTienTo(exp)<<"\n";
	}
	return 0;
}

