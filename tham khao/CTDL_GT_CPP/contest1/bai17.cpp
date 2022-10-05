#include<iostream>
using namespace std;

// tim boi so 
int n;
int x[10000];
int len;
bool stop,stop1;

void init(){
	cin>>n;
	x[1]=9;
	len = 2;
	stop = false;
	stop1 = false;
}

bool modularN(int len){
	int du  =  0;
	for(int i=1;i<=len;i++){
		du = (du*10 + x[i])%n;
	}
	if(du==0) return true;
	return false;
}

void display(int len){
	for(int i=1;i<=len;i++){
		cout<<x[i];
	}
	cout<<"\n";
}

void Try(int i){
	for(int j=0;j<=9;j+=9){
		x[i] = j;
		if((i==len)){
			if(modularN(len) && !stop1){
				display(len);
				stop=true;
				stop1=true;
			}
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
		if(x[1]%n==0){
			cout<<x[1]<<"\n";
		}
		else{
			while(!stop){
				Try(2);
				len++;
			}
		}
	}
	return 0;
}

