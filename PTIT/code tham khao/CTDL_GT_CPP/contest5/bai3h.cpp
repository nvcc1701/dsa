#include<iostream>
using namespace std;
int kq[1000][1000];
int main(){
	int tq;
	cin>>tq;
	while(tq--){
		int n,t;
		int a[1000];
		cin>>n>>t;
for(int i=1;i<=n;i++){
	cin>>a[i];
}
for(int i=0;i<=n;i++){
	kq[i][0]=1;
}		
for(int i=1;i<=t;i++){
	kq[0][i]=0;
}		

for(int i=1;i<=n;i++){
for(int j=1;j<=t;j++){
	if(a[i]>j){
		kq[i][j]=kq[i-1][j];
	}	
	else{
		if(kq[i-1][j]==1)
		kq[i][j]=1;
		else
		kq[i][j]=kq[i-1][j-a[i]];
	}
}	
}		
if(kq[n][t]==1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
		
		
		
		
		
		
		
		
		
		
			
	}
}
