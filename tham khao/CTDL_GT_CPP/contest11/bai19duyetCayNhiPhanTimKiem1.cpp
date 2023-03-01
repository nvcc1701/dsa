#include<bits/stdc++.h>
using namespace std;

// contest11/bai19duyetCayNhiPhanTimKiem1
// preOrder to postOrder

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

Node *preOrderToBST(int pre[],int n){
	if(n == 0){
		return NULL;
	}
	Node *root = NULL;
	for(int i=0;i<n;i++){
		root = insertToBST(pre[i],root);
	}
	return root;
}

void printPathPosorder(Node *root){
	if(root != NULL){
		printPathPosorder(root->left);
		printPathPosorder(root->right);
		cout<<root->data<<" ";
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
		Node *root = preOrderToBST(pre,n);
		printPathPosorder(root);
		cout<<"\n";
	}
	return 0;
}

