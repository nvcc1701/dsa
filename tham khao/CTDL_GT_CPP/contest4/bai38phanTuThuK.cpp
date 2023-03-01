#include<bits/stdc++.h>
using namespace std;

// contest4/bai38phanTuThuK

int main(){
	int t;
	cin>>t;
	while(t--){
		int m,n,k;
		cin>>m>>n>>k;
		int a[m+n+2],b[n];
		int i;
		for(i=0;i<m;i++){
			cin>>a[i];
		}	
		for(int j=0;j<n;j++){
			cin>>b[j];
			a[i] = b[j];
			i++;
		}
		sort(a,a+i);
		cout<<a[k-1]<<"\n";
	}
	return 0;
}

