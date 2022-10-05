#include<bits/stdc++.h>
using namespace std;

// contest5/bai23soBuocItNhat

// res = n - |day con tang dan dai nhat|

int soBuocItNhat(int arr[],int n){
	int l[n];
	for(int i=0;i<n;i++){
		l[i] = 1;
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(arr[i]>=arr[j] && l[i]<l[j]+1){
				l[i] = l[j] + 1;
			}
		}
	}
	return n - *max_element(l,l+n);
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
		cout<<soBuocItNhat(arr,n)<<"\n";
	}
	return 0;
}

