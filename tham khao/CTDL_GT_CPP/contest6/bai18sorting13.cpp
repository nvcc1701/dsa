#include<bits/stdc++.h>
using namespace std;

// contest6/bai18sorting13

void sorting13(int n,int m,long long a[],long long b[]){
	int i = 0, j = 0, k = 0;
	long long *c = new long long [n+m];
	while(i<n && j<m){
		if(a[i]<=b[j]){
			c[k++] = a[i++];
		}
		else{
			c[k++] = b[j++];
		}
	}
	while(i<n){
		c[k++] = a[i++];
	}
	while(j<m){
		c[k++] = b[j++];
	}
	for(int i=0;i<n + m;i++){
		cout<<c[i]<<" ";
	}
	cout<<"\n";
}

void selection_Sort(long long arr[],int n){
	int min_Index;
	for(int i=0;i<n-1;i++){
		min_Index = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min_Index]){
				min_Index = j;
			}
		}
		swap(arr[i],arr[min_Index]);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		long long *a = new long long [n];
		long long *b = new long long [m];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}	
		selection_Sort(a,n);
		selection_Sort(b,m);
		sorting13(n,m,a,b);
	}
	return 0;
}

