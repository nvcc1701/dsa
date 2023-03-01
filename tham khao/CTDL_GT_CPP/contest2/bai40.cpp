#include<bits/stdc++.h>
using namespace std;

// nguoi du lich ( nhanh can ) f+(n-i+1)*cin<fopt;
int n;
int c[16][16];
bool used[16];
int fopt = 99999999;
int x[16];//
int xopt[16];
int f = 0;
int cMin = 9999999;

void init(){
	cin>>n;
	x[1] = 1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>c[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=j && cMin>c[i][j]) cMin = c[i][j];
		}
	}
	for(int i=2;i<=n;i++){
		used[i] = true;
	}
}

void update(int value){
	for(int i=1;i<=n;i++){
		xopt[i] = x[i];
	}
	value = f + c[x[n]][1];
	fopt = value;
}

void Try(int i){
	for(int j=2;j<=n;j++){
		if(used[j]){
			used[j] = false;
			x[i] = j;
			f+=c[x[i-1]][x[i]];
			if(i==n){
				if(f + c[x[n]][1] < fopt){
					update(f);
				}
			}
			else if(f+(n-i+1)*cMin < fopt) Try(i+1);
			used[j] = true;
			f-=c[x[i-1]][x[i]];
		}
	}
}

int main(){
	init();
	Try(2);
	cout<<fopt;
	return 0;
}

