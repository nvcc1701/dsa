#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
	int x = *a;
	*a = *b;
	*b = x;
}
void bubbleSort(int a[], int n){
	for(int i=0; i<n+1; i++){
		int j;
		for(j=n-1; j>i; j--){
			if(a[j]<a[i])
				swap(&a[j] , &a[j-1]);
		}
		cout<<a[j]<<" ";
	}
}
int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	bubbleSort(a, n);
}
