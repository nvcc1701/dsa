#include<bits/stdc++.h>
using namespace std;

// contest11/bai20duyetCayNhiPhanTimKiem2
// check Inorder to BST 

bool check(int in[],int n){
	if(n == 0  || n == 1){
		return true;
	}
	for(int i=1;i<n;i++){
		if(in[i-1] >= in[i]){
			return false;
		}
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int in[n];
		for(int i=0;i<n;i++){
			cin>>in[i];
		}
		cout<<check(in,n)<<"\n";
	}
	return 0;
}

