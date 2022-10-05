// bat dau va ket thuc
// file:///D:/ctdlgt/Contest1.pdf 
#include<iostream>
using namespace std;
string tostring(long long a){
	string s;
	while(a){
		s+=(a%10 +'0');
		a/=10;
	}
	return s;
}
bool comparent(long long a){
	string s = tostring(a);
	if(s[0]==s[s.length()-1]) return true;
	return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a;
		cin>>a;
		if(comparent(a)) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

