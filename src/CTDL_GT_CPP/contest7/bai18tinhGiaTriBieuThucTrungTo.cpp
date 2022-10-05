#include<bits/stdc++.h>
using namespace std;

// contest7/bai18tinhGiaTriBieuThucTrungTo


long long tinh(long long num1, long long num2, char c){
	switch(c){
		case '+' : return num1 + num2;
		case '-' : return num1 - num2;
		case '*' : return num1 * num2;
		case '/' : return num1 / num2;
	}
}

int trongLuongToanTu(char c){
	if(c == '+' || c == '-'){
		return 1;
	}
	if(c == '*' || c == '/'){
		return 2;
	}
	else return 0;
}

long long tinhGiaTriBieuThucTrungTo(string exp){
	stack<long long> toanHang;
	stack<char> myS;
	for(int i=0;i<exp.length();i++){
		if(exp[i] == '('){
			myS.push('(');
		}
		else if(isdigit(exp[i])){
			float num = 0;	
			while(i < exp.length() && isdigit(exp[i])){
				num = num*10 + (exp[i] -'0');
				i++;
			}
			i--;
			toanHang.push(num);
		}
		else if(exp[i] == ')'){
			while(!myS.empty() && myS.top() != '('){
				long long num1 = toanHang.top();
				toanHang.pop();
				long long num2 = toanHang.top();
				toanHang.pop();
				toanHang.push(tinh(num2,num1,myS.top()));
				myS.pop();
			}
			if(!myS.empty() && myS.top() == '('){
				myS.pop();
			}
		}
		else{
			while(!myS.empty() && trongLuongToanTu(exp[i]) <= trongLuongToanTu(myS.top())){
				long long num1 = toanHang.top();
				toanHang.pop();
				long long num2 = toanHang.top();
				toanHang.pop();
				toanHang.push(tinh(num2,num1,myS.top()));
				myS.pop();
			}
			myS.push(exp[i]);
		}
	}
	while(!myS.empty()){
		long long num1 = toanHang.top();
		toanHang.pop();
		long long num2 = toanHang.top();
		toanHang.pop();
		toanHang.push(tinh(num2,num1,myS.top()));
		myS.pop();
	}
	return toanHang.top();
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string exp;
		cin>>exp;
		cout<<tinhGiaTriBieuThucTrungTo(exp)<<"\n";
	}
	return 0;
}

