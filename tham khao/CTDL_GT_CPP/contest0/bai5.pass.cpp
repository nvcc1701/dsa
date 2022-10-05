// phep cong 
// file:///D:/ctdlgt/Contest1.pdf
#include<iostream>
using namespace std;
int main()
{
//	int t=1;
//	cin>>t;
	string s;
	getline(cin,s);
//	cin.ignore();
	if((s[0]-'0') + (s[4]-'0') == (s[8]-'0')) cout<<"YES\n";
	else cout<<"NO\n";
//	while(t--)
//	{
//		string s;
//		getline(cin,s);
//		if((s[0]-'0') + (s[4]-'0') == (s[8]-'0')) cout<<"YES\n";
//		else cout<<"NO\n";
//	}
	return 0;
}

