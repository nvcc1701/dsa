#include<bits/stdc++.h>
using namespace std;

// contest7/bai26nhipChungKhoan

void nhipChungKhoan(int n,int arr[],int tang[]){
	tang[0] = 1;
	stack<int> myS;
	myS.push(0);
	for(int i=1;i<n;i++){
		while(!myS.empty() && arr[myS.top()] <= arr[i]){
			myS.pop();
		}
		if(myS.empty()){
			tang[i] = i + 1;
		}
		else{
			tang[i] = i - myS.top();
		}
		myS.push(i);
	}
}

int main(){
//	int t;
//	cin>>t;
//	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int tang[n];
		nhipChungKhoan(n,arr,tang);
		for(int i=0;i<n;i++){
			cout<<tang[i]<<" ";
		}
//		cout<<"\n";
//	}
	return 0;
}

