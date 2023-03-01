#include<bits/stdc++.h>
using namespace std;

// contest7/bai6kiemTraBieuThucSoHoc

bool toanTu(char c){
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool kiemTraBieuThucSoHoc(string str){
	stack<char> myS;
	int n = str.length();
	for(int i = 0;i<n;i++){
		if(str[i] != ')'){
			myS.push(str[i]);
		}
		else{
			bool thua = true;
			while(myS.top() != '('){
				myS.pop();
				if(toanTu(myS.top())){
					thua = false;
				}
			}
			myS.pop();
			if(thua){
				return true;
			}
		}
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		if(kiemTraBieuThucSoHoc(str)){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
	}
	return 0;
}

