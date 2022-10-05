#include<bits/stdc++.h>
using namespace std;

// contest8/bai5soNhiPhanTu1DenN

void soNhiPhan(int n){
	queue<string> myQ;
	myQ.push("1");
	int count = 0;
	while(!myQ.empty()){
		string s = myQ.front();
		myQ.pop();
		if(count >=n){
			break;
		}
		else{
			cout<<s<<" ";
			count++;
			myQ.push(s+"0");
			myQ.push(s+"1");
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		soNhiPhan(n);
		cout<<"\n";
	}
	return 0;
}

