#include<bits/stdc++.h>
using namespace std;

// contest6/bai3sorting3

void selection_Sort(int arr[],int n){
//	int count = 0;
	for(int i=0;i<n-1;i++){
		int min_Index = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min_Index] ){	// tim phan tu nho nhat trong mang tu vi tri i+1 den n-1
				min_Index = j;
			}
		}
		if(min_Index != i){
//			count++;
			swap(arr[i],arr[min_Index]);
		}
	}
//	return count;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		int temp[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			temp[i] = arr[i];
		}
//		cout<<selection_Sort(arr,n)<<"\n";
//		sort(temp,temp+n);
		selection_Sort(arr,n);
		int count = 0;
		for(int i=0;i<n;i++){
			if(temp[i] != arr[i]){
				count++;
			}
		}
		cout<<count/2<<"\n";
	}
	return 0;
}

