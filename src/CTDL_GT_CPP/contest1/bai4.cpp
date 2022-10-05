#include<iostream>
using namespace std;
// xau AB do dai n

int n;
char x[11];

void init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		x[i]='A';
	}
}

bool isFinal(){
	for(int i=1;i<=n;i++){
		if(x[i]!='B'){
			return false;
		}
	}
	return true;
}

void display(){
	for(int i=1;i<=n;i++){
		cout<<x[i];
	}
	cout<<" ";
}

void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j+65;
		if(i==n) display();
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

