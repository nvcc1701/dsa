#include<iostream>
#include<iomanip>
using namespace std;


void xuat(int a[], int k){
	for(int i=1;i<=k; i++)
	
	cout<<setw(5)<<a[i];
	cout<<endl;

}
void next(int i, int a[], int n, int k){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k) xuat(a,k);
		else next(i+1,a,n,k);
	}
}
int main(){
	int a[1000];
	int  n,k;
	cin>>n>>k>>a[n];
	next(1,a,n,k);
	
	
	
	return 0;
}
