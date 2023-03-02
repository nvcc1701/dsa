#include<bits/stdc++.h>
using namespace std;

// contest8/bai8soBDN2

long long soBDN2(int n){
	queue<long long> myQ;
	myQ.push(1);
	while(!myQ.empty()){
		long long s = myQ.front();
		myQ.pop();
		if(s%n==0){
			return s;
		}
		else{
			myQ.push(s*10);
			myQ.push(s*10+1);
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<soBDN2(n);
		cout<<"\n";
	}
	return 0;
}

