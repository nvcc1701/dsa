#include<iostream>
#include<algorithm>
using namespace std;
// hoan vi xau ky tu

int main()
{
	int t;	
	cin>>t;
//	cin.ignore();
	while(t--)
	{
		string s;
		cin>>s;
		cout<<s<<" ";
		while(next_permutation(s.begin(),s.end())){
			cout<<s<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

