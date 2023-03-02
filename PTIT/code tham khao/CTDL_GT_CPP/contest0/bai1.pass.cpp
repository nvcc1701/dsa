// uscln bcsnn
// file:///D:/ctdlgt/Contest1.pdf
#include<iostream>
using namespace std;
long long gcd(long long a, long long b){
	if(a%b==0) return b;
	else return gcd(b,a%b);
}
long long lcm(long long a,long long b){
	long long x = gcd(a,b);
	return (a*b)/x;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b;
		cin>>a>>b;
		cout<<gcd(a,b)<<" "<<lcm(a,b)<<"\n";
	}
	return 0;
}

