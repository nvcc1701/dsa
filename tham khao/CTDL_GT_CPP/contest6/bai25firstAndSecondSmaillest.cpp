#include<bits/stdc++.h>
using namespace std;

// contest6/bai25firstAndSecondSmaillest


void firstAndSecondSmaillest(int arr[],int n){
	int min1 = 99999999;
	int min2 = 99999999;
	for(int i=0;i<n;i++){
		if(min1>arr[i]){
			min1 = arr[i];
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i] != min1 && min2>min1 && min2>arr[i]){
			min2 = arr[i];
		}
	}
	if(min2 == 99999999){
		cout<<-1<<"\n";
	}
	else{
		cout<<min1<<" "<<min2<<"\n";
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int *arr = new int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		firstAndSecondSmaillest(arr,n);
	}
	return 0;
}

