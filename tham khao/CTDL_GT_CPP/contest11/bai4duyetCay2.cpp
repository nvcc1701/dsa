#include<bits/stdc++.h>
using namespace std;

// contest11/bai4duyetCay2
// preorder to postoeder

#define INF 1e9

void findPostOrder(int in[],int n,int min,int max,int &inIndex){
	if(inIndex == n){
		return;
	}
	if(in[inIndex] < min || in[inIndex] > max){
		return;
	}
	int val = in[inIndex++];
	findPostOrder(in,n,min,val,inIndex);
	findPostOrder(in,n,val,max,inIndex);
	cout<<val<<" ";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int in[n];
		for(int i=0;i<n;i++){
			cin>>in[i];
		}
		int preIndex = 0;
		findPostOrder(in,n,-INF,INF,preIndex);
		cout<<"\n";
	}
	return 0;
}

