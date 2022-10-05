#include<bits/stdc++.h>
using namespace std;

int n,k;

int xuLy(int n,int k){
	if(n==1) return 1;
	else return (xuLy(n - 1,k)+k)%n+1; 
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<xuLy(n,k)<<endl;
	}
	return 0;
}
