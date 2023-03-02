#include<bits/stdc++.h>
using namespace std;
// day so 1

int n,m;
int a[150];
int res[150][150];

void init(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			res[i][j]=0;
		}
	}
	m=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		res[n][i]=a[i];
	}
}

void display(){
	for(int i=1;i<=m;i++){
		cout<<"[";
		for(int j=1;j<=n;j++){
			if(j==n){
				cout<<res[i][j]<<"] ";
			}
			else{
				cout<<res[i][j]<<" ";
			}
		}
		n++;
	}
	cout<<"\n";
}

void genNext(){
	int i=1;
	for(int i=1;i<n;i++){
		int x = a[i];
		int y = a[i+1];
		a[i] = x + y;
	}
	n--;
	for(int i=1;i<=n;i++){
		res[n][i]=a[i];
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		while(n!=1){
			genNext();
		}
		display();
	}
	return 0;
}

