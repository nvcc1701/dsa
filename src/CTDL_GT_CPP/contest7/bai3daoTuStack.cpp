#include<bits/stdc++.h>
using namespace std;

// contest7/bai3daoTu

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string str;
		getline(cin,str);
		stack<char> myS;
		for(int i=0;i<str.length();i++){
			while(str[i] != ' ' && i<str.length()){
				myS.push(str[i++]);
			}
			while(!myS.empty()){
				cout<<myS.top();
				myS.pop();
			}
			if(str[i] == ' '){
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}

