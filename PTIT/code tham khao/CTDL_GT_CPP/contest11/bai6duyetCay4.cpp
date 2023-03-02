#include<bits/stdc++.h>
using namespace std;

// contest11/bai6duyetCay4
// inoder + level order -> postorder

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

void printPostorder(Node *root){
	if(root != NULL){
		printPostorder(root->left);
		printPostorder(root->right);
		cout<<root->data<<" ";
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int in[n];
		int level[n];
		for(int i=0;i<n;i++){
			cin>>in[i];
		}
		for(int i=0;i<n;i++){
			cin>>level[i];
		}
		printPostorder(root);
		cout<<"\n";
	}
	return 0;
}

