#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		cout<<n<<" ";
		int genNext = next_permutation(s.begin(),s.end());
		if(genNext){
			cout<<s<<"\n";
		}
		else{
			cout<<"BIGGEST\n";
		}
	}
	return 0;
}

