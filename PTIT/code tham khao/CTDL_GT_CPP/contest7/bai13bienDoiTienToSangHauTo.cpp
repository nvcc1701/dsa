#include<bits/stdc++.h>
using namespace std;

// contest7/bai13bienDoiTienToSangHauTo

bool toanTu(char c){
	return (c == '+' || c == '-' || c == '*' || c == '/' || c =='^');
}

string tienToSangHauTo(string exp){
	stack<string> myS;
	string toanHang1,toanHang2,temp;
	for(int i=exp.length()-1;i>=0;i--){
		if(toanTu(exp[i])){
			toanHang1 = myS.top();
			myS.pop();
			toanHang2 = myS.top();
			myS.pop();
			temp = toanHang1 + toanHang2 + exp[i];
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
		cout<<tienToSangHauTo(exp)<<"\n";
	}
	return 0;
}

