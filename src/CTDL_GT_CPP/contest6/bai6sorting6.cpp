#include<bits/stdc++.h>
using namespace std;

// contest6/bai6sorting6

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int *arr = new int [n];	
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}	
		sort(arr,arr+n);
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

