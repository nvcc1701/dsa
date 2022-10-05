#include<bits/stdc++.h>
using namespace std;

int s,t,a[10000],n, nto[10000],d[]={1,10,100,1000}, xet[100000];
void sang(){
	for(int i=2; i<=sqrt(10000); i++){
		if(nto[i] == 0){
			for(int j=i+i; j<10000; j+=i)
				nto[j]=1;
		}
	}
}
int tinh(int s, int t){
	memset(xet,0,sizeof(xet)); xet[s]=1;
	memset(a,0,sizeof(a));
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		int u=q.front(); q.pop();
		for(int i=0; i<4; i++){
			for(int j=0; j<=9; j++){
				int v=d[i]*((u/d[i]/10)*10+j) + u%d[i];
				if(v>1000 && xet[v]==0 && nto[v]==0){
					q.push(v);
					xet[v]=1;
					a[v]=a[u]+1;
				}
			}
		}
	}
	return a[t];
}
main(){
	cin>>n;
	sang();
	while(n--){
		cin>>s>>t;
		cout<<tinh(s,t)<<endl;
	}
}
