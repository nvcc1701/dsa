#include<bits/stdc++.h>
using namespace std;

// contest6/bai23missingNumber

int missingNumber(int n,int arr[]){
	sort(arr,arr+n-1);
	if(arr[0] != 1){
		return 1;
	}
	if(arr[n-2] !=n){
		return n;
	}
	for(int i=1;i<n-1;i++){
		if(arr[i] - i != 1){
			return arr[i] - 1;
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int *arr = new int[n-1];
		for(int i=0;i<n-1;i++){
			cin>>arr[i];
		}
		cout<<missingNumber(n,arr)<<"\n";
	}
	return 0;
}

