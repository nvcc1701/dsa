#include<bits/stdc++.h>
using namespace std;

// contest6/bai28sapXepChen

void insertion_Sort(int arr[],int n){
	int buoc = 0;
	int key,j;
	for(int i=1;i<n;i++){
		key = arr[i];
		j = i-1;
		cout<<"Buoc "<<buoc<<": ";
		for(int k=0;k<i;k++){
			cout<<arr[k]<<" ";
		}
		buoc++;
		cout<<"\n";
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
	cout<<"Buoc "<<buoc<<": ";
	for(int k=0;k<n;k++){
		cout<<arr[k]<<" ";
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	insertion_Sort(arr,n);
	return 0;
}

