#include<bits/stdc++.h>
using namespace std;
int n, k, a[1005], b[1005];
void XuLy(){
	cin>>n>>k;
	for(int i=1; i<=k; i++){
		cin>>a[i];
		b[i]=a[i];
	}
	int i=k;
	int dem=k;
	while(i>0 && a[i] == n-k+i) i-=1;
	if(i<=0){
			cout<<k;
		cout<<endl;
	}
	else{
		a[i] += 1;
		for(int j = i+1; j<=k; j++)
			a[j] = a[j-1] +1;
		for(int i=1; i<=k; i++){
			for(int j=1; j<=k; j++)
				if(a[j] == b[i]) dem--;
		}
		cout<<dem<<endl;
	} 
}
main(){
	int t; cin>>t;
	while(t--){
		XuLy();
	}
}
