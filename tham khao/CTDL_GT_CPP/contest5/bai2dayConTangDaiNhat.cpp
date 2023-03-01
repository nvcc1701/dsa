#include<bits/stdc++.h>
using namespace std;

// contest5/bai2dayConTangDaiNhat

int dayConTangDaiNhat(int arr[],int n){
	int l[n];
	for(int i=0;i<n;i++){
		l[i] = 1;
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(arr[j]<arr[i] && l[i]<l[j]+1){
				l[i] = l[j] + 1;
			}
		}
	}
	return *max_element(l,l+n);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<dayConTangDaiNhat(arr,n);
	return 0;
}

