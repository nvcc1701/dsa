#include<bits/stdc++.h>
using namespace std;

// contest11/bai22nodeTrungGianCuaBST

struct Node{
	int data;
	Node *left;
	Node *right;
};


Node *createNode(int x){
	Node *p = new Node;
	p->data = x;
	p->left = p->right = NULL;
	return p;
}

Node *insertNode(Node *root,int x){
	if(root == NULL){
		root = createNode(x);
		return root;
	}
	if(x <= root->data){
		root->left = insertNode(root->left,x);
	}
	else{
		root->right = insertNode(root->right,x);
	}
	return root;
}

Node *buildTreePreorder(int pre[],int n){
	Node *root = NULL;
	for(int i=0;i<n;i++){
		root = insertNode(root,pre[i]);
	}
	return root;
}

int demNodeTrungGian(Node *root){
	if(root == NULL || (root->left == NULL && root->right == NULL)){
		return 0;
	}
	return 1 + demNodeTrungGian(root->left) + demNodeTrungGian(root->right);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int pre[n];
		for(int i=0;i<n;i++){
			cin>>pre[i];
		}
		Node *root = buildTreePreorder(pre,n);
		cout<<demNodeTrungGian(root)<<"\n";
	}
	return 0;
}
