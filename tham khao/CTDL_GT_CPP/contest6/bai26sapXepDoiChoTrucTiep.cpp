#include<bits/stdc++.h>
using namespace std;

// contest6/bai26sapXepDoiChoTrucTiep

void interchangeSort(int arr[],int n){
	int buoc = 1;
	bool sw;
	for(int i=0;i<n-1;i++){
		sw = false;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				swap(arr[i],arr[j]);
				sw = true;
			}
		}
		if(sw){
			cout<<"Buoc "<<buoc<<": ";
			for(int i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
			buoc++;
			cout<<"\n";
		}
		else{
			break;
		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	interchangeSort(arr,n);
	return 0;
}

