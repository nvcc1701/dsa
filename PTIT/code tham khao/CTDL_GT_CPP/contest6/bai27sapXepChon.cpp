#include<bits/stdc++.h>
using namespace std;

// contest6/bai27sapXepChon

void selection_Sort(int arr[],int n){
	int buoc = 1,min_Index;
	for(int i=0;i<n-1;i++){
		min_Index = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min_Index]){
				min_Index = j;
			}
		}
//		if(min_Index != i){
			swap(arr[i],arr[min_Index]);
			cout<<"Buoc "<<buoc<<": ";
			for(int i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
			buoc++;
			cout<<"\n";
//		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	selection_Sort(arr,n);
	return 0;
}

