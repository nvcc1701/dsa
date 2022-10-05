#include<iostream>
using namespace std;

// Tap quan su 

int n,k,x[40],temp[40];

void init(){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>x[i];
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

bool inArray(int a,int x[]){
	for(int i=1;i<=k;i++){
		if(a==x[i]) return true;
	}
	return false;
}

void genNext(){
	int i = k;
	while(x[i]==n-k+i) i--;
	for(int j=1;j<i;j++){
		temp[j]=x[j];
	}
	x[i]++;
	temp[i]=x[i];
	for(int j=i+1;j<=k;j++){
		temp[j] = x[i]+j-i;
	}
	x[i]--;
	int res = k;
	for(int j=1;j<=k;j++){
		if(inArray(temp[j],x)) res--;
	}
	cout<<res<<"\n";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		init();
		if(isFinal()){
			cout<<k<<"\n";
		}
		else{
			genNext();
		}
	}
	return 0;
}

