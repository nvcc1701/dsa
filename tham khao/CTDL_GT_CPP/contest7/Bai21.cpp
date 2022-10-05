#include<bits/stdc++.h>
using namespace std;

int n,a[100005],b[100005],c[100005];

void nhap(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
}

void xuLy(){
	stack<int> val,index;
	
	for(int i=0;i<n;i++){
		while(!val.empty() && a[i]>val.top()){
			b[index.top()]=i;
			val.pop();
			index.pop();
		}
		val.push(a[i]);
		index.push(i);
	}
	while(!val.empty()){
		b[index.top()]=-1;
		val.pop();
		index.pop();
	}
	
	for(int i=0;i<n;i++){
		while(!val.empty() && a[i]<val.top()){
			c[index.top()]=i;
			val.pop();
			index.pop();
		}
		val.push(a[i]);
		index.push(i);
	}
	while(!val.empty()){
		c[index.top()]=-1;
		val.pop();
		index.pop();
	}

	
	for(int i=0;i<n;i++){
		if(b[i]!=-1 && c[b[i]]!=-1) cout<<a[c[b[i]]]<<" ";
		else cout<<-1<<" ";
	}
	cout<<endl;
	
}


int main(){
	int t;
	cin>>t;
	while(t--){
		nhap();
		xuLy();
	}
	return 0;
}
