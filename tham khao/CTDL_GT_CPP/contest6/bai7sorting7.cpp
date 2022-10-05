#include<bits/stdc++.h>
using namespace std;

// contest6/bai7sorting7

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int *arr = new int [n];
		int *temp = new int [n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			temp[i] = arr[i];
		}
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(temp[i]>temp[j]){
					swap(temp[i],temp[j]);
				}
			}
		}
		int r = 0,l = 0;
		for(int i=0;i<n;i++){
			if(arr[i] != temp[i]){
				l = i+1;
				break;
			}
		}
		for(int i=n-1;i>0;i--){
			if(arr[i] != temp[i]){
				r = i+1;
				break;
			}
		}
		cout<<l<<" "<<r<<"\n";
	}
	return 0;
}

