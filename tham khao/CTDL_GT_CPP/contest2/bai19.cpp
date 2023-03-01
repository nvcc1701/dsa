#include<bits/stdc++.h>
using namespace std;
// day so 1

int n;
int a[150];

void init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
}

void display(){
	cout<<"[";
	for(int i=1;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<a[n]<<"]\n";
}

void genNext(){
	int i=1;
	for(int i=1;i<n;i++){
		int x = a[i];
		int y = a[i+1];
		a[i] = x + y;
	}
	n--;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		while(n!=1){
			display();
			genNext();
		}
		display();
	}
	return 0;
}

