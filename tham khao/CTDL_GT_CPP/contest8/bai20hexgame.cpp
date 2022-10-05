#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

// contest8/bai20hexgame

string xoayTamTrai(string s){
	char temp = s[0];
	s[0] = s[3];
	s[3] = s[7];
	s[7] = s[8];
	s[8] = s[5];
	s[5] = s[1];
	s[1] = temp;
	return s;
}

string xoayTamPhai(string s){
	char temp = s[1];
	s[1] = s[4];
	s[4] = s[8];
	s[8] = s[9];
	s[9] = s[6];
	s[6] = s[2];
	s[2] = temp;
	return s;
}

void hexagame(string s){
	string res = "1238004765";
	queue<string> myQ;
	unordered_map<string,int> myMap;
	myQ.push(s);
	myMap[s] = 0;
	while(!myQ.empty()){
		string x = myQ.front();
		myQ.pop();
		if(x == res){
			break;
		}
		string t = xoayTamTrai(x);
		if(myMap.find(t) == myMap.end()){
			myQ.push(t);
			myMap[t] = myMap[x] + 1;
		}
		string p = xoayTamPhai(x);
		if(myMap.find(p) == myMap.end()){
			myQ.push(p);
			myMap[p] = myMap[x] + 1;
		}
	}
	cout<<myMap[res];
}

int main(){
	string s = "0000000000";
	for(int i=0;i<10;i++){
		cin>>s[i];
	}
	hexagame(s);
	return 0;
}

