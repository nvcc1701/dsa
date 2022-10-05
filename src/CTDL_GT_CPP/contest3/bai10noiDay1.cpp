#include<bits/stdc++.h>
using namespace std;

// contest3/bai10noiDay1

long long noiDay(int n,int arr[]){
	long long opt = 0;
	priority_queue<int,vector<int>,greater<int> > myPQ;
	for(int i=0;i<n;i++){
		myPQ.push(arr[i]);
	}
	long long first,second;
	while(myPQ.size()>1){
		first = myPQ.top();
		myPQ.pop();
		second = myPQ.top();
		myPQ.pop();
		cout<<"f = "<<first<<" "<<"s= "<<second<<"\n";
		opt += first + second;
		cout<<"otp = "<<opt<<"\n";
		myPQ.push(first+second);
	}
	return opt;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<noiDay(n,arr)<<"\n";
	}
	return 0;
}

