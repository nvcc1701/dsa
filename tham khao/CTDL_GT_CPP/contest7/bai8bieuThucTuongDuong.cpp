#include<bits/stdc++.h>
using namespace std;

// contest7/bai8bieuThucTuongDuong

bool toanTu(char c){
	return (c == '+' || c == '-');
}

void bieuThucTuongDuong(string str){
	stack<int> myS;
	string res = "";
	myS.push(0);
	for(int i=0;i<str.length();i++){
		if(str[i] == '+'){
			if(myS.top() == 1){
				res += '-';
			}
			else if(myS.top() == 0){
				res += '+';
			}
		}
		else if(str[i] == '-'){
			if(myS.top() == 1){
				res += '+';
			}
			else if(myS.top() == 0){
				res += '-';
			}
		}
		else if(i>0 && str[i] == '('){
			if(str[i-1] == '-'){
				if( myS.top() == 1){
					myS.push(0);
				}
				else if(myS.top() == 0){
					myS.push(1);
				}
			}
			else if(str[i-1] == '+'){
				myS.push(myS.top());
			}
		}
		else if(str[i] == ')'){
			myS.pop();
		}
		else if(str[i]!='('){
			res += str[i];
		}
	}
	for(int i=0;i<res.length();i++){
		if(toanTu(res[i]) && toanTu(res[i+1])){
			i++;
			continue;
		}
		cout<<res[i];
	}
	cout<<"\n";
//	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
//		cout<<bieuThucTuongDuong(str)<<"\n";
		bieuThucTuongDuong(str);
	}
	return 0;
}

