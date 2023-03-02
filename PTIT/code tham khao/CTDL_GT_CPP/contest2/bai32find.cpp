#include<bits/stdc++.h>
using namespace std;

//contest2/bai32

set<string> res;
bool check;
string str;
int ngoacDong;
int ngoacMo;

bool xauNgoacDung(string str){
	stack<char> myStack;
	for(int i=0;i<str.length();i++){
		if(str[i]=='('){
			myStack.push(str[i]);
		}
		else if(str[i]==')'){
			if(myStack.empty()){
				return false;
			}
			myStack.pop();
		}
	}
	if(myStack.empty()){
		return true;
	}
	return false;
}

void xoaNgoacDongOdau(string &str){
	int vtDong = str.find(')');
	int vtMo = str.find('(');
	while(vtDong<vtMo && str.size()>0){
		str.erase(str.begin()+vtDong);
		vtDong = str.find(')');
		vtMo = str.find('(');
	}
}

void xoaNgoacMoOCuoi(string &str){
	reverse(str.begin(),str.end());
	int vtDong = str.find(')');
	int vtMo = str.find('(');
	while(vtMo<vtDong && str.size()>0){
		str.erase(str.begin()+vtMo);
		vtDong = str.find(')');
		vtMo = str.find('(');
	}
	reverse(str.begin(),str.end());
}

void Try1(int t){
	for(int i=0;i<str.length();i++){
		if(str[i]!=')'){
			continue;
		}
		else if(str[i]==')'){
			str.erase(str.begin()+i);
			if(xauNgoacDung(str)){
				check = true;
				res.insert(str);
			}	
			else Try1(t+1);
			str.insert(str.begin()+i,')');
		}
	}
}

void Try2(int t){
	for(int i=0;i<str.length();i++){
		if(str[i]!='('){
			continue;
		}
		else if(str[i]=='('){
			str.erase(str.begin()+i);
			if(xauNgoacDung(str)){
				check = true;
				res.insert(str);
			}	
			else Try1(t+1);
			str.insert(str.begin()+i,'(');
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		res.clear();
		cin>>str;
		if(str.find('(')==-1 || str.find(')')==-1 || xauNgoacDung(str)){
			cout<<-1<<"\n";
		}
		else{
			xoaNgoacDongOdau(str);
			xoaNgoacMoOCuoi(str);
			if(str.find('(')==-1 || str.find(')')==-1){
				cout<<-1<<"\n";
			}
			else if(xauNgoacDung(str)){
				cout<<str<<"\n";
			}
			else{
				check = false;
				ngoacDong = 0;
				ngoacMo = 0;
				for(int i=0;i<str.length();i++){
					if(str[i]=='('){
						ngoacMo++;
					}
					else if(str[i]==')'){
						ngoacDong++;
					}
				}
				if(ngoacDong>ngoacMo){
					Try1(0);
					if(!check){
						cout<<-1<<"\n";
					}
					else{
						set<string> ::reverse_iterator  rit;
						for(rit=res.rbegin();rit!=res.rend();rit++){
							cout<<*rit<<" ";
						}
						cout<<"\n";
					}
				}
				else if(ngoacDong<ngoacMo){
					Try2(0);
					if(!check){
						cout<<-1<<"\n";
					}
					else{
						set<string> ::reverse_iterator  rit;
						for(rit=res.rbegin();rit!=res.rend();rit++){
							cout<<*rit<<" ";
						}
						cout<<"\n";
					}
				}
			}
		}
	}
	return 0;
}
