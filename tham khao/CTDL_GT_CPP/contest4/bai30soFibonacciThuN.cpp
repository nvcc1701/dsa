#include<bits/stdc++.h>
using namespace std;

// contest4/bai30soFibonacciThuN
#define module 1000000007

long long **multi1(long long **a,long long *b){ // khoi tao
	long long **c;
	c = new long long *[2];
	for(int i=0;i<2;i++){
		c[i] = new long long [2];
	}
	c[0][0] = (a[0][0]*b[0] + a[0][1]*b[1]) % module;
	c[1][0] = (a[1][0]*b[0] + a[1][1]*b[1]) % module;
	return c;
}

long long **multi(long long **a,long long **b){	//nhan 2 matrix
	long long **c;
	c = new long long *[2];
	for(int i=0;i<2;i++){
		c[i] = new long long[2];
	}
	c[0][0] = (a[0][0]*b[0][0] + a[0][1]*b[1][0]) % module;
	c[0][1] = (a[0][0]*b[0][1] + a[0][1]*b[1][1]) % module;
	c[1][0] = (a[1][0]*b[0][0] + a[1][1]*b[1][0]) % module;
	c[1][1] = (a[1][0]*b[0][1] + a[1][1]*b[1][1]) % module;
	return c;
}

long long **pow(long long **a,int n){
	if(n==1){
		return a;
	}
	long long **temp;
	temp = pow(a,n/2);
	if(n%2==0){
		return multi(temp,temp);
	}
	return multi(multi(temp,temp),a);
}

long long fibonacci(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	long long **a;
	a = new long long *[2];
	for(int i=0;i<2;i++){
		a[i] = new long long[2];
	}
	a[0][0] = 1;a[0][1] = 1;a[1][0] = 1;a[1][1] = 0;
	long long *b;
	b = new long long [2];
	b[0]=1;b[1]=1;
	long long **aPown = pow(a,n-1);
	long long **res = multi1(aPown,b);
	return res[1][0];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<fibonacci(n)<<"\n";
	}
	return 0;
}

