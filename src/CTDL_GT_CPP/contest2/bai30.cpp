#include<bits/stdc++.h>
using namespace std;

// so nguyen to

int n,p,s;
int snt[200],soLuong;
int x[200];
int res;
int sol[200][200];

void init(){
	cin>>n>>p>>s;
	res = 0;
	x[0]=0;
	for(int i=1;i<=11;i++){
		for(int j=1;j<=11;j++){
			sol[i][j]=0;
		}
	}
}

void sangSnt(){
	bool check[s];
	for(int i=2;i<=s;i++){
		check[i]=true;
	}
	for(int i=2;i<=sqrt(s);i++){
		if(check[i]){
			for(int j=i*2;j<=s;j+=i){
				check[j]=false;
			}
		}
	}
	soLuong = 1;
	for(int i=p;i<=s;i++){
		if(check[i]){
			snt[soLuong++]=i;
		}
	}
	soLuong--;
}

void display(){
	for(int i=1;i<=res;i++){
		for(int j=1;j<=n;j++){
			cout<<sol[i][j]<<" ";
		}
		cout<<"\n";
	}
}

bool checkTong(){
	int sum = 0;
	for(int i=1;i<=n;i++){
		sum+=snt[x[i]];
	}
	if(sum==s){
		return true;
	}
	return false;
}

void Try(int i){
	for(int j=x[i-1]+1;j<=soLuong-n+i;j++){
		x[i]=j;
		if(i==n){
			if(checkTong()){
				res++;
				for(int i=1;i<=n;i++){
					sol[res][i]=snt[x[i]];
				}
			}
		}
		else Try(i+1);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		sangSnt();
		Try(1);
		cout<<res<<"\n";
		display();
	}
	return 0;
}

