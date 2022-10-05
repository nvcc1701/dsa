#include<bits/stdc++.h>
using namespace std;
int F[1005][1005];
int tinh(string s){
	int i, j, k, kq=0;
	int n=s.length();
	memset(F,0,sizeof(F));
	for(i=0; i<n; i++) F[i][i]=1;
	for(k=1; k<n; k++){
		for(i=0; i<n-k; i++){
			j=i+k;
			if(s[i]==s[j] && k>1) F[i][j]=F[i+1][j-1];
			else if(s[i]==s[j] && k==1) F[i][j]=1;
			if(F[i][j]) kq=max(kq, j-i+1);
		}
	}
	return kq;
}
main(){
	int t; string s;
	cin>>t;
	while(t--){
		cin>>s;
		cout<<tinh(s)<<endl;
	}
}
