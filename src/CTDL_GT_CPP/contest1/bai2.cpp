#include<iostream>
using namespace std;
// to hop ke tiep 

int n,k,x[1000];

void nhap(){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>x[i];
	}
}

void init(){
	for(int i=1;i<=k;i++){
		x[i]=i;
	}
}

bool isFinal(){
	for(int i=1;i<=k;i++){
		if(x[i]!=n-k+i){
			return false;
		}
	}
	return true;
}

void genNext(){
	int i=k;
	while(x[i]==n-k+i) i--;
	x[i]++;
	for(int j=i+1;j<=k;j++){
		x[j]=x[i]+j-i;
	}
}

void display(){
	for(int i=1;i<=k;i++){
		cout<<x[i]<<" ";
	}
	cout<<"\n";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		nhap();
		if(!isFinal()){
			genNext();
			display();
		}
		else{
			init();
			display();
		}
	}
	return 0;
}

