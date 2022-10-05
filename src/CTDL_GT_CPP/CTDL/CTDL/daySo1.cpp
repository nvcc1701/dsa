#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n+5];
		for(int i=0; i<n; i++)
			cin>>a[i];
		cout<<"[";
		for(int i=0; i<n; i++){
			cout<<a[i];
			if(i<(n-1)) cout<<" ";
		}	
		cout<<"]"<<endl;
		for(int i=0; i<n-1; i++){
			cout<<"[";
			for(int j=0; j<n-i-1; j++){
				a[j] = a[j] + a[j+1];
				cout<<a[j];
				if(j<(n-i-2)) cout<<" ";
			}
			cout<<"]"<<endl;
		}
	}
}
