#include<bits/stdc++.h>
using namespace std;

// contest7/bai7suaLaiDayNgoac

int suaLaiDayNgoac(string str){
	stack<char> myS;
	for(int i=0;i<str.length();i++){
		if(!myS.empty() && str[i] == ')'){
			if(myS.top() == '('){
				myS.pop();
			}
			else{
				myS.push(str[i]);
			}
		}
		else{
			myS.push(str[i]);
		}
	}
	int size_S = myS.size();
	int n =0;
	while(!myS.empty() && myS.top() == '('){
		myS.pop();
		n++;
	}
	return (n%2 + size_S/2);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<suaLaiDayNgoac(str)<<"\n";
	}
	return 0;
}

