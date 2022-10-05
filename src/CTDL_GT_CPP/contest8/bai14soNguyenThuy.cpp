#include<bits/stdc++.h>
using namespace std;

// contest8/bai14soNguyenThuy

void soNguyenThuy(int n){
	queue<string> myQ;
	myQ.push("4");
	myQ.push("5");
	int count = 0;
	while(!myQ.empty()){
		string s = myQ.front();
		myQ.pop();
		if(count<n){
			myQ.push(s+"4");
			myQ.push(s+"5");
			string temp = s;
			reverse(s.begin(),s.end());
			cout<<temp+s<<" ";
			count++;
		}
	}
	cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		soNguyenThuy(n);
	}
	return 0;
}

