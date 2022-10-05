#include<bits/stdc++.h>
using namespace std;

// contest7/bai22hinhChuNhatLonNhat


long long hinhChuNhatLonNhat(long long h[],int n){
	stack<int> myS;
	long long s;
	long long maxS = 0;
	int i = 0;
	int index;
	while(i<n){
		if(myS.empty() || h[myS.top()] <= h[i]){
			myS.push(i++);
		}
		else{
			index = myS.top();
			myS.pop();
			if(myS.empty()){
				s = h[index] * i;
			}
			else{
				s = h[index] * (i - myS.top() - 1);
			}
			maxS = max(maxS,s);
		}
	}
	while(!myS.empty()){
		int index = myS.top();
		myS.pop();
		if(myS.empty()){
			s = h[index] * i;
		}
		else{
			s = h[index] * (i - myS.top() - 1);
		}
		maxS = max(maxS,s);
	}
	return maxS;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long h[n];
		for(int i=0;i<n;i++){
			cin>>h[i];
		}
		cout<<hinhChuNhatLonNhat(h,n)<<"\n";
	}
	return 0;
}

