// ma tran xoan oc fibonacci
#include<iostream>
void arrayFibonacci(int n,long long f[]){
	f[0]=1;f[1]=1;
	for(int i=2;i<n;i++){
		f[i]=f[i-1]+f[i-2];
	}
}
using namespace std;
int main()
{
	int t,test=1;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long a[n][n],f[n*n];
		int t=n*n;
		arrayFibonacci(t,f);
		int temp=0,p=0,hang=n,cot=n;
		while(temp<t){
			for(int i=p;i<cot;i++){
				a[p][i]=f[temp++];
			}
			for(int i=p+1;i<hang;i++){
				a[i][cot-1]=f[temp++];
			}
			if(p!=hang-1){
				for(int i=cot-2;i>=p;i--){
					a[hang-1][i]=f[temp++];
				}
			}
			if(p!=cot-1){
				for(int i=hang-2;i>p;i--){
					a[i][p]=f[temp++];
				}
			}
			p++;
			hang--;cot--;
		}
		cout<<"Test "<<test<<":\n";
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<"\n";
		}
		test++;
	}
	return 0;
}

