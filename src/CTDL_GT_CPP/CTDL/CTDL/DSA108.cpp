#include<bits/stdc++.h>
using namespace std;
int n, a[100],k;
void sinh(int a[], int n){
	++a[n-1];
	for(int i=n-1; i>0; --i){
		if(a[i]>1){
			++a[i-1];
			a[i] -=2;
		}
	}
}
void xuat(int a[], int n){
	int dem = 0;
	for(int i=0; i<n; i++){
		if(a[i]==1){
			dem+=1;
		}	
	}
	if(dem==k){
		for(int i=0; i<n; i++){
			cout<<a[i];
		}
		cout<<endl;
	}
}
int main(){
    int t;
    cin >> t;
    while(t--){
    	cin>>n>>k;
	    int *A = new int[n];
	    for (int i = 0; i < n; i++) A[i] = 0;
	    for (int i = 0; i < pow(2, n); i++) {
	        xuat(A, n);
	        sinh(A, n);
	    }
	    cout<<endl;
	}
}
