#include<bits/stdc++.h>
using namespace std;

// contest11/bai24cayNhiPhanTimKiemCanBang1

int rootOfBalancedBST(int arr[],int n){
	return arr[(0+n-1)/2];
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
		sort(arr,arr+n);
		cout<<rootOfBalancedBST(arr,n)<<"\n";
	}
	return 0;
}

