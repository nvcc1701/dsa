#include<bits/stdc++.h>
using namespace std;

// contest6/bai9sorting9

int sorting9(int arr[],int n,int k){
	int count = 0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i] + arr[j] == k){
				count++;
			}
		}
	}
	return count;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int *arr = new int [n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<sorting9(arr,n,k)<<"\n";
	}
	return 0;
}

