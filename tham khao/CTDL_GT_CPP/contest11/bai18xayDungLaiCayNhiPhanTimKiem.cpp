#include<bits/stdc++.h>
using namespace std;

// contest11/bai18xayDungLaiCayNhiPhanTimKiem

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

Node *insertDataToInOrder(int x,Node *root){
	if(root == NULL){
		root = createNode(x);
		return root;
	}
	if(x <= root->data){
		root->left = insertDataToInOrder(x,root->left);
	}
	else{
		root->right = insertDataToInOrder(x,root->right);
	}
	return root;
}

Node *levelOrderToBST(int level[],int n){
	if(n == 0){
		return NULL;
	}
	Node *root = NULL;
	for(int i=0;i<n;i++){
		root = insertDataToInOrder(level[i],root);
	}
	return root;
}

void printPathPreOrder(Node *root){
	if(root != NULL){
		cout<<root->data<<" ";
		printPathPreOrder(root->left);
		printPathPreOrder(root->right);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int level[n];
		for(int i=0;i<n;i++){
			cin>>level[i];
		}
		Node *root = levelOrderToBST(level,n);
		printPathPreOrder(root);
		cout<<"\n";
	}
	return 0;
}

