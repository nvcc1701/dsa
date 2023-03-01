#include<bits/stdc++.h>
using namespace std;

// contest3/bai11noiDay2
#define module 1000000007

long long ghepChuoi(int n, int arr[]){
	long long opt = 0;
	priority_queue<long long,vector<long long>,greater<long long> > myPQ;
	for(int i=0;i<n;i++){
		myPQ.push(arr[i]);
	}
	long long first,second;
	while(myPQ.size()>1){
		first = myPQ.top();
		myPQ.pop();
		second = myPQ.top();
		myPQ.pop();
		opt += (first + second)%module;
		myPQ.push((first + second)%module);
	} 
	return opt%module;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<ghepChuoi(n,arr);
	return 0;
}

