#include<bits/stdc++.h>
using namespace std;

// Tap hop
int n,k;
int x[21];
int s;
int res;

void init(){
	do{
		cin>>n>>k>>s;
		res = 0;
		x[0]=0;
	}
	while(n!=0 || k!=0 || s!=0);
}

void checkSum(){
	int sum = 0;
	for(int i=1;i<=k;i++){
		sum+=x[i];
	}
	if(sum==s){
		res++;
	}
}

void Try(int i){
	for(int j = x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		if(i==k){
			checkSum();
		}
		else Try(i+1);
	}
}

int main(){
	while(1){
		cin>>n>>k>>s;
		x[0]=0;
		res = 0;
		if(n==0 && k==0 && s==0){
			break;
		}
		else{
			Try(1);
			cout<<res<<"\n";
		}
	}
	return 0;
}

