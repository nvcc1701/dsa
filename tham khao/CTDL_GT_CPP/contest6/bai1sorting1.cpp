#include<bits/stdc++.h>
using namespace std;

// contest6/bai1sorting1
void bubble_Sort(int arr[],int n){
	for(int i=0;i<n-1;i++){
//		int min_Index = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				swap(arr[i],arr[j]);
			}
		}
	}
}

void solution(int arr[],int n){
	if(n%2==0){
		for(int i=0;i<n/2;i++){
			cout<<arr[n-i-1]<<" "<<arr[i]<<" ";
		}
	}
	else{
		int t = n/2;
		for(int i=0;i<t;i++){
			cout<<arr[n-i-1]<<" "<<arr[i]<<" ";
		}
		cout<<arr[t];
	}
	cout<<"\n";
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
		bubble_Sort(arr,n);
		solution(arr,n);
	}
	return 0;
}

