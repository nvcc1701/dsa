#include<iostream>
using namespace std;
// sinh to hop 

int n,k,x[16];

void init(){
	cin>>n>>k;
	x[0]=0;
}

bool isFinal(){
	for(int i=1;i<=k;i++){
		if(x[i]!=n-k+i){
			return false;
		}
	}
	return true;
}

void display(){
	for(int i=1;i<=k;i++){
		cout<<x[i];
	}
	cout<<" ";
}

void Try(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i] = j;
		if(i==k) display();
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

