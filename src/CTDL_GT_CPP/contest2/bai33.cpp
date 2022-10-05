#include<bits/stdc++.h>
using namespace std;

// xep quan hau 1;
int n;
int c[11],xuoi[21],nguoc[21];
int x[11];
int res = 0;

void init(){
	cin>>n;
	res = 0;
	memset(c,true,sizeof(c));
	memset(xuoi,true,sizeof(xuoi));
	memset(nguoc,true,sizeof(nguoc));
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if(c[j] && xuoi[i-j+n] && nguoc[i+j-1]){
			x[i]=j;
			c[j] = false;
			xuoi[i-j+n] = false;
			nguoc[i+j-1] = false;
			if(i==n){
				res++;
			}
			else Try(i+1);
			c[j] = true;
			xuoi[i-j+n] = true;
			nguoc[i+j-1] = true;
		}
	}
}

int main(){
	init();
	Try(1);
	cout<<res<<"\n";
	return 0;
}

