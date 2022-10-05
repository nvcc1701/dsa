#include<bits/stdc++.h>
using namespace std;

//contest4/bai35dayConLienTiepCoTongLonNhat

int maxSubArraySum(int arr[], int n){
	int max_so_far = 0, max_ending_here = 0;
	for(int i = 0; i < n; i++) {
		max_ending_here = max_ending_here + arr[i];
		if(max_ending_here < 0){
			max_ending_here = 0;
		}
		max_so_far = max(max_so_far,max_ending_here);
	}
	return max_so_far;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<maxSubArraySum(arr,n)<<"\n";
	}
	return 0;
}

