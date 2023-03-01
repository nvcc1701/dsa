#include<bits/stdc++.h>
using namespace std;

// sap xep quan hau 2

int a[9][9];
int x[9];
bool c[9],xuoi[17],nguoc[17];
int res;

void init(){
	for(int i=1;i<=8;i++){
		c[i]=true;
		for(int j=1;j<=8;j++){
			cin>>a[i][j];
		}
	}
	memset(c,true,sizeof(c));
	memset(xuoi,true,sizeof(xuoi));
	memset(nguoc,true,sizeof(nguoc));
	res = 0;
}

int sumList(){
	int sum = 0;
	for(int i=1;i<=8;i++){
		sum+=a[i][x[i]];
	}
	return sum;
}

void Try(int i){
	for(int j=1;j<=8;j++){
		if(c[j] && xuoi[i-j+8] && nguoc[i+j-1]){
			x[i] = j;
			c[j] = false;
			xuoi[i-j+8] = false;
			nguoc[i+j-1] = false;
			if(i==8){
				res = max(res,sumList());
			}
			else Try(i+1);
			c[j] = true;
			xuoi[i-j+8] = true;
			nguoc[i+j-1] = true;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		Try(1);
		cout<<res<<"\n";
	}
	return 0;
}

