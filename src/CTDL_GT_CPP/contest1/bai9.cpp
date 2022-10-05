#include<iostream>
using namespace std;

// ma gray 1

int n,x[11],gray[11];

void init(){
	cin>>n;
}

void toGray(){
	gray[1]=x[1];
	for(int i=2;i<=n;i++){
		gray[i] = (x[i]+x[i-1])%2;
	}
}

void display(){
	for(int i=1;i<=n;i++){
		cout<<gray[i];
	}
	cout<<" ";
}

void Try(int i){
	for(int j=0;j<=1;j++){
		x[i] = j;
		if(i==n){
			toGray();
			display();
		}
		else Try(i+1);
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		init();
		Try(1);
		cout<<"\n";
	}
	return 0;
}

