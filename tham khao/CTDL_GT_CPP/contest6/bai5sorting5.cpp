#include<bits/stdc++.h>
using namespace std;

// contest6/bai5sorting5

void insertion_Sort(int arr[],int n){
	int key,j;
	for(int i=1;i<n;i++){
		key = arr[i];
		j = i-1;
		while(j >= 0 && arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

void findUnion(int n,int m,int a[],int b[]){
	int i=0,j=0;
	while(i<n && j<m){
		if(a[i] < b[j]){
			cout<<a[i]<<" ";
			i++;
		}
		else if(a[i] > b[j]){
			cout<<b[j]<<" ";
			j++;
		}
		else{
			cout<<a[i]<<" ";
			i++;j++;
		}
	}
	while(i<n){
		cout<<a[i]<<" ";
		i++;
	}
	while(j<m){
		cout<<b[j]<<" ";
		j++;
	}
	cout<<"\n";
}

void findIntersection(int n,int m,int a[],int b[]){
	int i=0,j=0;
	while(i<n && j<m){
		if(a[i] < b[j]){
			i++;
		}
		else if(a[i] > b[j]){
			j++;
		}
		else{
			cout<<a[i]<<" ";
			i++;j++;
		}
	}
	cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int *a = new int[n];
		int *b = new int[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		insertion_Sort(a,n);
		insertion_Sort(b,m);
		findUnion(n,m,a,b);
		findIntersection(n,m,a,b);
	}
	return 0;
}

