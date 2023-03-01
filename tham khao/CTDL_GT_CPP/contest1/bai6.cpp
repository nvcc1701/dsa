#include<iostream>
#include<cstring>
using namespace std;
// liet ke hoan vi 

int n,x[11];
bool c[11];

void init(){
	cin>>n;
	memset(c,true,sizeof(c));
}

bool isFinal(){
	for(int i=1;i<=n;i++){
		if(x[i]!=n-i+1){
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
	for(int j=1;j<=n;j++){
		if(c[j]){
			x[i] = j;
			c[j]=false;
			if(i==n) display();
			else Try(i+1);
			c[j]=true;
		}
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

