// mang doi xung
// file:///D:/ctdlgt/Contest1.pdf
#include<iostream>
using namespace std;
bool compare(int n,long long a[]){
	int f=0,l=n-1;
	if(f==l) return true;
	while(f<l){
		if(a[f]==a[l]){
			f++;l--;
			if(f>l || f==l) return true;
		}
		else return false;	
	}
	return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(compare(n,a)) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}

