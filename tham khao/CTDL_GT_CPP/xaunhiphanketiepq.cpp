#include<bits/stdc++.h>
using namespace std;
#define sn long long
int check(string a)
{
	for(int i=0;i<a.size();i++)
		if(a[i]=='0') return 0;
	return 1;
}
int solve()
{
	string a;
	cin>>a;
	if(check(a)==1)
	{
		for(int i=0;i<a.size();i++)
			cout<<'0';
			cout<<endl;
			return 0;
	}
	for(int i=a.size()-1;i>=0;i--)
		if(a[i]=='0') 
		{
			a[i]='1';
			for(int j=i+1;j<a.size();j++)
				a[j]='0';
			break;
		}
	for(int i=0;i<a.size();i++)
	cout<<a[i];
	cout<<endl;
	return 0;
}
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		solve();
	}
	return 0;
}
