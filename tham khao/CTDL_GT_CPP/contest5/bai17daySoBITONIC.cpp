#include<bits/stdc++.h>
using namespace std;

// contest5/bai17daySoBITONIC

int daysoBITONIC(int arr[],int n){
	int sumI[n];
	for(int i=0;i<n;i++){
		sumI[i] = arr[i];
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(arr[i]>arr[j]){
				if(sumI[i]<sumI[j] + arr[i]){
					sumI[i] = sumI[j] + arr[i];
				}
			}
		}
	}
//	sumI[0] = arr[0];
//	for(int i=1;i<n;i++){
//		if(arr[i]>arr[i-1]){
//			sumI[i] = sumI[i-1] + arr[i];
//		}
//		else{
//			sumI[i] = arr[i];
//		}
//	}
//	int sumD[n];
//	sumD[n-1] = arr[n-1];
//	for(int i=n-2;i>=0;i--){
//		if(arr[i]>arr[i+1]){
//			sumD[i] = sumD[i+1] + arr[i];
//		}
//		else{
//			sumD[i] = arr[i];
//		}
//	} 
	int sumD[n];
	for(int i=0;i<n;i++){
		sumD[i] = arr[i];
	}
	for(int i=n-2;i>=0;i--){
		for(int j=n-1;j>i;j--){
			if(arr[i]>arr[j]){
				if(sumD[i]<sumD[j] + arr[i]){
					sumD[i] = sumD[j] + arr[i];
				}
			}
		}
	}
	int maxBITONIC = sumI[0] + sumD[0] - arr[0];
	for(int i=1;i<n;i++){
		maxBITONIC = max(maxBITONIC,sumI[i] + sumD[i] - arr[i]);
	}
	return maxBITONIC;
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
		cout<<daysoBITONIC(arr,n)<<"\n";
	}
	return 0;
}

