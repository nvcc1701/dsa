#include<bits/stdc++.h>
using namespace std;

// contest4/bai31luyThuaMaTran
#define module 1000000007
int n,k;

long long **multi(long long **a,long long **b){
	long long **c;
	c = new long long *[n];
	for(int i=0;i<n;i++){
		c[i] = new long long [n];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j] = 0;
			for(int k=0;k<n;k++){
				c[i][j] +=(a[i][k]*b[k][j]);
				c[i][j]%=module;
			}
		}
	}
	return c;
}

long long **pow(long long **a,int k){
	if(k==1){
		return a;
	}
	else if(k%2==0){
		long long **temp;
		temp = pow(a,k/2);
		return multi(temp,temp);
	}
	else{
		return multi(pow(a,k-1),a);
	}
}

long long **solution(){
	long long **a  = new long long *[n];
	for(int i=0;i<n;i++){
		a[i] = new long long [n];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	long long **res = pow(a,k);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<res[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		solution();
	}
	return 0;
}

