#include<iostream>
using namespace std;
// hoan vi ke tiep

int n,x[1000];

void nhap(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
}

void init(){
	for(int i=1;i<=n;i++){
		x[i]=i;
	}
}

bool isFinal(){
	for(int i=1;i<=n;i++){
		if(x[i]!=n-i+1){
			return false;
		}
	}
	return true;
}

void genNext(){
	int i=n-1;
	while(x[i]>x[i+1]) i--; // tim phan tu dau tien nho hon tu ben phai
	int k=n;
	while(x[i]>x[k]) k--; // next_permutation
	swap(x[i],x[k]);
	int f=i+1,l=n;
	while(f<l){
		swap(x[f],x[l]);
		f++;l--;
	}
}

void display(){
	for(int i=1;i<=n;i++){
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

