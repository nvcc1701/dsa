#include<bits/stdc++.h>
using namespace std;

// contest3/bai4tongNhoNhat


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long so1 = 0;
		long long so2 = 0;
		for(int i=0;i<n;i+=2){
			so1 = so1*10+a[i];
		}
		for(int i=1;i<n;i+=2){
			so2 = so2*10+a[i];
		}
		long long res = so1 + so2;
		cout<<res<<"\n";
	}
	return 0;
}

