#include<bits/stdc++.h>
using namespace std;

// contest6/bai19sorting14

void selection_Sort(int arr[],int n){
	int min_Index;
	for(int i=0;i<n-1;i++){
		min_Index = i;
		for(int j=i+1;j<n;j++){
			if(arr[j] < arr[min_Index]){
				min_Index = j;
			}
		}
		swap(arr[i],arr[min_Index]);
	}
}

int sorting14(int arr[],int n){
	int res = 0;
	for(int i=0;i<n-1;i++){
		if(arr[i] == arr[i+1]){
			continue;
		}
		res += arr[i+1] - arr[i] - 1;
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int *a = new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(n==1){
			cout<<0<<"\n";
		}
		else{
			selection_Sort(a,n);
			cout<<sorting14(a,n)<<"\n";
		}
	}
	return 0;
}

