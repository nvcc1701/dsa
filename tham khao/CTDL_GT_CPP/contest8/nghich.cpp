#include<bits/stdc++.h>
using namespace std;

int tong(string s){
	int tong = 0;
	for(int i=0;i<s.length();i++){
		tong += s[i] -'0';
	}
	return tong;
}

int tongBinhPhuong(string s){
	int sum = 0;
	for(int i=0;i<s.length();i++){
		sum = sum + (s[i]-'0')*(s[i]-'0');
	}
	return sum;
}

string x(int a,int b){
	queue<string> myQ;
	myQ.push("9");
	myQ.push("8");
	myQ.push("7");
	myQ.push("6");
	myQ.push("5");
	myQ.push("4");
	myQ.push("3");
	myQ.push("2");
	myQ.push("1");
	string temp;
	while(!myQ.empty()){
		string u = myQ.front();
		myQ.pop();
		if(tong(u) == a && tongBinhPhuong(u) == b){
			return u;
		}
		if(u.length() > a){
			return "-1";
		}
		for(char c='9';c>='0';c--){
			myQ.push(u+c);
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		cout<<x(a,b)<<"\n";
	}
	return 0;
}

