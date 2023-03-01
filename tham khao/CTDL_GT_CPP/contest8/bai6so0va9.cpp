#include<bits/stdc++.h>
using namespace std;

// contest8/bai6so0va9

long long so0va9(int n){
	queue<long long> myQ;
	myQ.push(9);
	while(!myQ.empty()){
		long long t = myQ.front();
		myQ.pop();
		if(t%n==0){
			return t;
		}
		else{
			myQ.push(t*10);
			myQ.push(t*10+9);
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<so0va9(n)<<"\n";
	}
	return 0;
}

