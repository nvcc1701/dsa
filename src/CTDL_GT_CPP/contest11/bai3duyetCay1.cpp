#include<bits/stdc++.h>
using namespace std;

// contest11/bai3duyetCay1
// postorder from inorder and preorder

void printPostorder(int in[],int pre[],int index_In_Start,int index_In_End,map<int,int> myMap,int &preIndex){
	if(index_In_Start > index_In_End){
		return;
	}
	int indexPost = myMap[pre[preIndex++]];
	printPostorder(in,pre,index_In_Start,indexPost-1,myMap,preIndex);
	printPostorder(in,pre,indexPost+1,index_In_End,myMap,preIndex);
	cout<<in[indexPost]<<" ";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int in[n],pre[n];
		map<int,int> myMap;
		for(int i=0;i<n;i++){
			cin>>in[i];
			myMap[in[i]] = i;
		}
		for(int i=0;i<n;i++){
			cin>>pre[i];
		}
		int preIndex = 0;
		printPostorder(in,pre,0,n-1,myMap,preIndex);
		cout<<"\n";
	}
	return 0;
}

