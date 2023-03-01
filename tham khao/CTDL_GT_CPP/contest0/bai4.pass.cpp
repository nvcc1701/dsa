// phan tich thua so nguyen to 
// file:///D:/ctdlgt/Contest1.pdf
#include<iostream>
#include<cmath>
using namespace std;
bool checkSNT(long long a){
	if(a<2) return false;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return false;
	}
	return true;
}
int main()
{
	int t;
	cin>>t;
	int test = 1;
	while(t--)
	{
		long long a;
		cin>>a;
		long long b=a;
		if(a==1 || checkSNT(a)) cout<<"Test "<<test<<":"<<" "<<a<<"(1)\n";
		else{
			cout<<"Test "<<test<<":";
			for(int i=2;i<=a/2;i++){
				if(b%i==0){
					int dem=0;
					while(b%i==0){
						dem++;
						b/=i;
					}
					cout<<" "<<i<<"("<<dem<<")";
				}
				if(b==1) break;
			}
			cout<<"\n";
		}
		test++;
	}
	return 0;
}

