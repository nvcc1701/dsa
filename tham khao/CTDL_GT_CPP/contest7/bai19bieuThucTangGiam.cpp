#include<bits/stdc++.h>
using namespace std;

// contest7/bai19bieuThucTangGiam

int bieuThucTangGiam(string str){
	int n = str.length();
	stack<int> myS;
	int res = 0;
	for(int i=0;i<=n;i++){
		myS.push(i+1);
		if(str[i] == 'I' || i == n){
			while(!myS.empty()){
				res = res*10 + myS.top();
				myS.pop();
			}
		}
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<bieuThucTangGiam(str)<<"\n";
	}
	return 0;
}

