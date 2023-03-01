#include<bits/stdc++.h>
using namespace std;

// contest11/bai23doSauCuaCayNhiPhanTimKiem

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

int maxDepthOfBST(Node *root){
	if(root == NULL){
		return 0;
	}
	int left_Depth = maxDepthOfBST(root->left);
	int right_Depth = maxDepthOfBST(root->right);
	if(left_Depth > right_Depth){
		return left_Depth + 1;
	}
	else{
		return right_Depth + 1;
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
		cout<<maxDepthOfBST(root)<<"\n";
	}
	return 0;
}

