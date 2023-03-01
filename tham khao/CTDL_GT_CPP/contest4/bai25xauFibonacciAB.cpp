#include<bits/stdc++.h>
using namespace std;

// contest3/bai25xauFibonacciAB

long long f[93];
//n=6,i= 4;
//f1=A=1, f2=B=1, 
//f3=f1+f2=AB=2;
//f4=f2+f3=BAB=3;
//f5=f3+f4=ABBAB=5;
//f6=f4+f5=BABABBAB=8; n =6,i=4.
void fibonacci(int n){
	f[1] = 1;
	f[2] = 1;
	for(int i=3;i<=n;i++){
		f[i] = f[i-2]+f[i-1];
	}
}

char solution(int n,long long i){
	if(n==1){
		return 'A';
	}
	if(n==2){
		return 'B';
	}
	if(i<=f[n-2]){
		return solution(n-2,i);
	}
	return solution(n-1,i-f[n-2]);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long i;
		cin>>n>>i;
		fibonacci(n);
		cout<<solution(n,i)<<"\n";
	}
	return 0;
}

