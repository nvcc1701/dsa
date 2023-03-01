#include<bits/stdc++.h>
using namespace std;

// contest6/bai17sorting12

void insertion_Sort(long long arr[],int n){
	long long key;
	int j;
	for(int i=1;i<n;i++){
		key = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
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
		insertion_Sort(a,n);
		insertion_Sort(b,m);
		long long res = a[n-1]*b[0];
		cout<<res<<"\n";
	}
	return 0;
}

