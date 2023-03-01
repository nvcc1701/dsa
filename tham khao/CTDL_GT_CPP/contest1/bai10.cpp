#include<iostream>
using namespace std;

//binary to gray

string s;

void init(){
	cin>>s;
}

void binary_To_Gray(){
	for(int i=s.length()-1;i>=1;i--){
		s[i] = (s[i]-'0'+s[i-1]-'0') % 2 +'0';
	}
}

void display(){
	cout<<s<<"\n";
}

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		init();
		binary_To_Gray();
		display();
	}
	return 0;
}

