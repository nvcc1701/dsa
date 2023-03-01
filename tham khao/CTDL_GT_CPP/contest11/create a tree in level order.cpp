#include<bits/stdc++.h>
using namespace std;

// create a tree in level order

struct node{
	string data;
	node *left;
	node *right;
};

node *createrNode(string s){
	node *p = new node;
	p->data = s;
	p->left = p->right = NULL;
	return p;
}

node *insert(node *root, string s, queue<node *> &myQ){
	node *node = createrNode(s);
	if(root == NULL){
		root = node;
	}
	else if(myQ.front()->left == NULL){
		myQ.front()->left = node;
	}
	else{
		myQ.front()->right = node;
		myQ.pop();
	}
	myQ.push(node);
	return root;
}

node *createTree(string s[],int n){
	node *root = NULL;
	queue<node *> myQ;
	for(int i=0;i<n;i++){
		root = insert(root,s[i],myQ);
	}
	return root;
}

void levelOrder(node *root){
	if(root == NULL){
		return;
	}
	queue<node *> q;
	q.push(root);
	while(!q.empty()){
		cout<<q.front()->data<<" ";
		if(q.front()->left != NULL){
			q.push(q.front()->left);
		}
		if(q.front()->right != NULL){
			q.push(q.front()->right);
		}
		q.pop();
	}
	cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		node *root = NULL;
		root = createTree(s,n);
		levelOrder(root);
	}
	return 0;
}

