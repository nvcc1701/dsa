#include<bits/stdc++.h>
using namespace std;

// contest3/bai6sapXepThamLam

bool solution(int arr[],int n){
	int temp[n]; // tao mang temp;
	copy(arr,arr+n,temp); // coppy mang arr sang mang temp;
	sort(temp,temp+n);
	for(int i=0;i<n;i++){
		// kiem tra hinh anh phan chieu cua arr[] va temp[]
		if(!(temp[i]==arr[i]) && !(temp[i]==arr[n-i-1])){
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
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(solution(arr,n)){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
	}
	return 0;
}

