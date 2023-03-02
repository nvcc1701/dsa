// CHIEC GAY MA THUAT
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
//	int t;
//	cin>>t;
//	while(t--)
//	{
		int n;
		cin>>n;
		long long a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		bool check=true;
		for(int i=0;i<n;i++){
			if(b[i]-a[i]<0) check=false;
		}
		if(!check) cout<<"NO\n";
		else cout<<"YES\n";
//	}
	return 0;
}

