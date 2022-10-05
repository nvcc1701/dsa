#include<bits/stdc++.h>
using namespace std;

// contest7/bai20phanTuBenPhaiDauTienLonHon
int n;
int arr[100000];

void phanTuBenPhaiDauTienLonHon1(){
	stack<int> myS;
	myS.push(arr[0]);
	for(int i=1;i<n;i++){
		if(myS.empty()){
			myS.push(arr[i]);
			continue;
		}
		while(!myS.empty() && arr[i]>myS.top()){
			cout<<arr[i]<<" ";
			myS.pop();
		}
		myS.push(arr[i]);
	}
	while(!myS.empty()){
		cout<<-1<<" ";
		myS.pop();
	}
	cout<<"\n";
}
void phanTuBenPhaiDauTienLonHon(){
	stack<int> myS;
	myS.push(0);
	int r[n];
	for(int i=1;i<n;i++){
		if(myS.empty()){
			myS.push(i);
			continue;
		}
		while(!myS.empty() && arr[i]>arr[myS.top()]){
			r[myS.top()] = arr[i];
			myS.pop();
		}
		myS.push(i);
	}
	while(!myS.empty()){
		r[myS.top()] = -1;
		myS.pop();
	}
	for(int i=0;i<n;i++){
		cout<<r[i]<<" ";
	}
	cout<<"\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		phanTuBenPhaiDauTienLonHon();
	}
	return 0;
}

