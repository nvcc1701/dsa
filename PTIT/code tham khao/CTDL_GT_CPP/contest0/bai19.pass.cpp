// uoc so chia het cho 2
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long a[50000];
		int t=0;
		for(long long i=2;i<=sqrt(n);i++){
			if(n%i==0){
				if(i==n/i){
					a[t]=i;
					t++;
				}
				else{
					a[t]=i;
					t++;
					a[t]=n/i;
					t++;
				}
			}
		}
		a[t]=n;
		t++;
		int count = 0;
		for(int i=0;i<t;i++){
			if(a[i]%2==0) count++;
		}
		cout<<count<<"\n";
	}
	return 0;
}
