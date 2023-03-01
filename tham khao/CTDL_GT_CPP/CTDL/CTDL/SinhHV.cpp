#include<bits/stdc++.h>
using namespace std;
int n, A[1000];
bool OK = false;
void in(){
	for(int i=1; i<=n; i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}

void sinhHV(){
	int i = n-1;
	while(A[i]<A[i+1]){
		i--;
	}

	if(i==0) OK= true;
	else{
		int tmp=A[i];
		A[i]=A[i+1];
		A[i+1]=tmp;
		int d=i+1, c=n;
		while(d<c){
			tmp=A[d];
			A[d]=A[c];
			A[c]= tmp;
			d++; c--;
		}
	}
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1; i<=n; i++){
			A[i] = n-i+1;
		}
		while(!OK){
			in();
			sinhHV();
		}
	}
	return 0;
}
