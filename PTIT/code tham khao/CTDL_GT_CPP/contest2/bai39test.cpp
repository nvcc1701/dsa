#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		long long n;
		cin>>s>>n;
		int len = s.length();
		int soLan = 0;
		while(len<n){
			len *= 2;
			soLan++;
		}
		cout<<s[n]<<"\n";
	}
	return 0;
}

