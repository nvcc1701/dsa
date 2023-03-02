#include<bits/stdc++.h>
using namespace std;

// contest11/bai21nodeLaCuaCayNhiPhanTimKiem

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

Node *insertToBST(int x,Node *root){
	if(root == NULL){
		root = createNode(x);
		return root;
	}
	if(x <= root->data){
		root->left = insertToBST(x,root->left);
	}
	else{
		root->right = insertToBST(x,root->right);
	}
	return root;
}

Node *preorderToBST(int pre[],int n){
	if(n == 0){
		return NULL;
	}
	Node *root = NULL;
	for(int i=0;i<n;i++){
		root = insertToBST(pre[i],root);
	}
	return root;
}

bool nodeLa(Node *leaf){
	return (leaf->left == NULL && leaf->right == NULL);
}

void findNodeLeaf(Node *root){
	if(root == NULL){
		return;
	}
	if(nodeLa(root)){
		cout<<root->data<<" ";
	}
	if(root->left != NULL){
		findNodeLeaf(root->left);
	}
	if(root->right != NULL){
		findNodeLeaf(root->right);
	}
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
		Node *root = preorderToBST(pre,n);
		findNodeLeaf(root);
		cout<<"\n";
	}
	return 0;
}

