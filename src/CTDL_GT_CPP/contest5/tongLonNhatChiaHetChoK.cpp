#include<bits/stdc++.h>
using namespace std;

// contest/bai

int n,k;
int arr[30];

void xuLy(long long sum){
	queue<pair<long long, int> > myQ;
	set<long long> myS;
	myS.insert(sum);
	myQ.push(make_pair(sum,-1));
	while(!myQ.empty()){
		pair<long long,int> s = myQ.front();
		myQ.pop();
		if(s.first % k == 0){
			cout<<s.first;
			return;
		}
		for(int i=0;i<n;i++){
			if(i != s.second ){
				if(myS.find(sum + arr[s.second] + arr[i]) == myS.end() || s.second == -1){
					myS.insert(sum - arr[i]);
					myQ.push(make_pair(sum-arr[i],i));
				}
			}
		}
	}
	cout<<0;
}

int main(){
	cin>>n>>k;
	long long sum = 0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum += arr[i];
	}
	xuLy(sum);
	return 0;
}

