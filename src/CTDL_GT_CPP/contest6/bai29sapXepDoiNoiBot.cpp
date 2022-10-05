#include<bits/stdc++.h>
using namespace std;

// contest6/bai29sapXepDoiNoiBot

void bubble_Sort(int arr[],int n){
	int buoc = 1;
	bool sw;
	for(int i=0;i<n-1;i++){
		sw = false;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				sw = true;
			}
		}
		if(sw){
			cout<<"Buoc "<<buoc<<": ";
			for(int i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
			cout<<"\n";
			buoc++;
		}
		else{
			break;
		}
	}
}

int main(){
//	int t;
//	cin>>t;
//	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		bubble_Sort(arr,n);
//	}
	return 0;
}

