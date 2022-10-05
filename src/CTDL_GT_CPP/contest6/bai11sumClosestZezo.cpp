#include<bits/stdc++.h>
using namespace std;

// contest6/bai11sumClosestZezo

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
		int min = 99999999;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(abs(min) > abs(arr[i] + arr[j])){
					min = arr[i] + arr[j];
				}
			}
		}
		cout<<min<<"\n";
	}
	return 0;
}

