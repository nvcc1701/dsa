#include<bits/stdc++.h>
using namespace std;

// ky tu dac biet

int main()
{
	string s;
	long long n;
	cin>>s>>n;
	long long lenSPow2 = s.length();
	int lenS = s.length();
	while(lenSPow2 < n){
		lenSPow2 *= 2;
	}
	while(n > lenS){

		if(n > lenSPow2/2){
			n -= lenSPow2/2;
			n --;
			if(n == 0){
				n  = lenSPow2/2;
			}
		}
		lenSPow2 /= 2;
	}
	cout<<s[n-1];
	return 0;
}

