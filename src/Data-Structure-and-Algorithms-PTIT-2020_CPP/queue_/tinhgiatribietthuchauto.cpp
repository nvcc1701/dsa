#include<bits/stdc++.h>
using namespace std;

// contest7/bai16tinhGiaTriBieuThucHauTo

bool toanHang(char c){
	return ((c-'0'>=0) && (c-'0'<=9));
}

bool toanTu(char c){
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

int giaTri(char c,int num1,int num2){
	if(c == '+') return num1 + num2;
	if(c == '-') return num1 - num2;
	if(c == '*') return num1 * num2;
	if(c == '/') return num1 / num2;
}

int tinhGiaTriBieuThucHauTo(string exp){
	stack<int> myS; 
	for(int i=0;i<exp.length();i++){
		if(toanHang(exp[i])){
			myS.push(exp[i]-'0');
		}
		else if(toanTu(exp[i])){
			int num2 = myS.top();
			myS.pop();
			int num1 = myS.top();
			myS.pop();
			myS.push(giaTri(exp[i],num1,num2));
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
		cout<<tinhGiaTriBieuThucHauTo(exp)<<"\n";
	}
	return 0;
}

