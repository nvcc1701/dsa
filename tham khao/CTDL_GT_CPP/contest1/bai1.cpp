#include<iostream>
using namespace std;
// xau nhi phan ke tiep
string s;

void nhap(){
	cin>>s;
}

void init(){
	for(int i=0;i<s.length();i++){
		s[i]='0';
	}
}

bool isFinal(){
	for(int i=0;i<s.length();i++){
		if(s[i]!='1'){
			return false;
		}
	}
	return true;
}

void display(){
	cout<<s<<"\n";
}

void genNext(){
	int i=s.length()-1;
	while(s[i]=='1'){
		s[i]='0';
		i--;
	}
	s[i]='1';
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		nhap();
		if(!isFinal()){
			genNext();
			display();
		}
		else{
			init();
			display();
		}
	}
	return 0;
}

