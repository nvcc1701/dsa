#include<iostream>
using namespace std;
int main()
{
	int t,test = 1;
	cin>>t;
	while(t--)
	{
		int n,m,p;
		cin>>n>>m>>p;
		int a[n],b[m];
		int c[n+m];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		
		if(p<0) p=0;
		else if(p>n) p=n;
		
		for(int i=0;i<p;i++){
			c[i]=a[i];
		}
		for(int i=p;i<p+m;i++){
			c[i]=b[i-p];
		}
		for(int i=p+m;i<n+m;i++){
			c[i]=a[i-m];
		}
		
		cout<<"Test "<<test<<":\n";
		for(int i=0;i<n+m;i++){
			cout<<c[i]<<" ";
		}
		cout<<"\n";
		test++;
	}
	return 0;
}

