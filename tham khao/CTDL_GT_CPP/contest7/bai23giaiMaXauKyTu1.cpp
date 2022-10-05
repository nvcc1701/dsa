#include<bits/stdc++.h>
using namespace std;

// contest7/bai23giaiMaXauKyTu

string giaiMaXauKyTu(string str){
	stack<int> soLan;
	stack<char> myS;
	string temp = "";
	string res = "";
	int count;
	for(int i=0;i<str.length();i++){
		if(isdigit(str[i])){
			int x = 0;
			while(isdigit(str[i])){
				x = x*10 + str[i] - '0';
				i++;
			}
			i--;
			soLan.push(x);
		}
		else if(str[i] == '['){
			if(isdigit(str[i-1])){
				myS.push(str[i]);
			}
			else{
				myS.push(str[i]);
				soLan.push(1);
			}
		}
		else if(str[i] == ']'){
			temp = "";
			count = 0;
			if(!soLan.empty()){
				count = soLan.top();
				soLan.pop();
			}
			while(!myS.empty() && myS.top() != '['){
				temp = myS.top() + temp;;
				myS.pop();
			}
			if(!myS.empty() && myS.top() == '['){
				myS.pop();
			}
			for(int j=0;j<count;j++){
				res = res + temp;
			}
			for(int k=0;k<res.length();k++){
				myS.push(res[k]);
			}
			res = "";
		}
		else{
			myS.push(str[i]);
		}
	}
	while(!myS.empty()){
		res = myS.top() + res;
		myS.pop();	
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<giaiMaXauKyTu(str)<<"\n";
	}
	return 0;
}

