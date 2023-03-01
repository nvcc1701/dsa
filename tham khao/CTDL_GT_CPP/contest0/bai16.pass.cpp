// so lam ma 
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin>>s;
		int number[s.length()];
		for(int i=0;i<s.length();i++){
			if(s[i]=='I') number[i]=1;
			else if(s[i]=='V') number[i]=5;
			else if(s[i]=='X') number[i]=10;
			else if(s[i]=='L') number[i]=50;
			else if(s[i]=='C') number[i]=100;
			else if(s[i]=='D') number[i]=500;
			else if(s[i]=='M') number[i]=1000;
		}
		int sum=0;
		for(int i=0;i<s.length()-1;i++){
			if(number[i]<number[i+1]){
				number[i]=-number[i];
			}
		}
		for(int i=0;i<s.length();i++){
			sum+=number[i];
		}
		cout<<sum<<"\n";
	}
	return 0;
}

