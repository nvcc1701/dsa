#include<bits/stdc++.h>
using namespace std;
int n, a[100];
void sinh(int a[], int n){
	a[n-1]++;
	for(int i=n-1; i>0; --i){
		if(a[i]>1){
			a[i-1]++;
			a[i] -=2;
		}
	}
}
void xuat(int a[], int n){
	for(int i=0; i<n; i++){
		if(a[i]==0) cout<<'A';
		else cout<<'B';
	}
	cout<<" ";
}
int main(){
    int t;
    cin >> t;
    while(t--){
    	int n;
    	cin>>n;
	    int *A = new int[n];
	    for (int i = 0; i < n; i++) A[i] = 0;
	    for (int i = 0; i < pow(2, n); i++) {
	        xuat(A, n);
	        sinh(A, n);
	    }
	    cout<<endl;
	}
}
