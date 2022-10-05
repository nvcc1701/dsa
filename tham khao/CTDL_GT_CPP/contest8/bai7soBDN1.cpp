#include<bits/stdc++.h>
using namespace std;

// contest8/bai8soBDN1

long long soBDN1(long long n){
	queue<long long> myQ;
	myQ.push(1);
	long long count = 0;
	while(!myQ.empty()){
		long long s = myQ.front();
		myQ.pop();
		if(s<=n){
			count++;
			myQ.push(s*10);
			myQ.push(s*10+1);
		}
	}
	return count;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<soBDN1(n);
		cout<<"\n";
	}
	return 0;
}

