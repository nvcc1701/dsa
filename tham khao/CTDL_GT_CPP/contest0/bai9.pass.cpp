// xau tang giam
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
		getline(cin,s);
		int i=0;
		while(s[i]==s[i+1]) i++;
		if(i==s.length()-1) cout<<"YES\n";
		else{
			if(s[i]<s[i+1]){
				i++;
				while(s[i]<=s[i+1] && i<s.length()-1) i++;
	//			cout<<"LENGS = "<<s.length()<<" ---- i = "<<i<<"\n";
				if(i==s.length()-1) cout<<"YES\n";
				else cout<<"NO\n";
			}
			else if(s[i]>s[i+1])
			{
				i++;
				while(s[i]>=s[i+1] && i<s.length()-1) i++;
	//			cout<<"LENGS = "<<s.length()<<" ---- i = "<<i<<"\n";
				if(i==s.length()-1) cout<<"YES\n";
				else cout<<"NO\n";
			}
		}
	}
	return 0;
}

