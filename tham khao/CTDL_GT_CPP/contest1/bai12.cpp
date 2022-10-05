#include<iostream>
using namespace std;

// xau nhi phan co K bit 1;

int n,k,x[17];

void init(){
	cin>>n>>k;
	for(int i=1;i<=n-k;i++){
		x[i]=0;
	}
	for(int i=n-k+1;i<=n;i++){
		x[i]=1;
	}
}

void display(){
	for(int i=1;i<=n;i++){
		cout<<x[i];
	}
	cout<<"\n";
}

void checkKBit1(){
	int count = 0;
	for(int i=1;i<=n;i++){
		if(x[i]==1){
			count++;
		}
	}
	if(count == k) display();
}

bool isFinal(){
	for(int i=1;i<=k;i++){
		if(x[i]!=1){
			return false;
		}
	}
	return true;
}

void genNext(){
	int i=n;
	while(x[i]==1){
		x[i]=0;
		i--;
	}
	x[i]=1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		init();
		while(!isFinal()){
			checkKBit1();
			genNext();
		}
		checkKBit1();
	}
	return 0;
}

