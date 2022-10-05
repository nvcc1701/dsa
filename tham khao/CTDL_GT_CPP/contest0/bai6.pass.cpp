// ma tran xoan oc nguoc
#include<iostream>
using namespace std;
int main()
{
	int t,test=1;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n][n];
		int p=0,hang=n,cot=n;
		int t =n*n;
		while(t>0){
			for(int i=p;i<cot;i++){
				a[p][i]=t--;
			}
			for(int i=p+1;i<hang;i++){
				a[i][cot-1]=t--;
			}
			if(p!=hang-1){
				for(int i=cot-2;i>=p;i--){
					a[hang-1][i]=t--;
				}
			}
			if(p!=cot-1){
				for(int i=hang-2;i>p;i--){
					a[i][p]=t--;
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

