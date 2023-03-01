#include<iostream>
using namespace std;
//tong bang n 

int n,x[11],k;

void init(){
	cin>>n;
	x[0]=0;
	x[1]=n;
	k=1;
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
	int i = k;
	while(x[i]==1) i--;
	x[i]--;
	int tongcuoi = k-i+1;
	int thuong = tongcuoi/x[i];
	int du = tongcuoi%x[i];
	for(int j=i+1;j<=i+thuong;j++){
		x[j]=x[i];
	}
	k = i+thuong;
	if(du!=0){
		k++;
		x[k]=du;
	}
}

void display(){
	cout<<"(";
	for(int i=1;i<=k;i++){
		if(i==k){
			cout<<x[i]<<")";
		}
		else cout<<x[i]<<" ";
	}
	cout<<" ";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		init();
		while(!isFinal()){
			display();
			genNext();
		}
		display();
		cout<<"\n";
	}
	return 0;
}

