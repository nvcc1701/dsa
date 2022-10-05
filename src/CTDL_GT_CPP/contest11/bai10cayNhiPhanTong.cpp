#include<bits/stdc++.h>
using namespace std;

// contest11/bai10cayNhiPhanTong

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

Node *buildTree(Node *root,int n){
	root = NULL;
	int u,v;
	char x;
	map<int,Node *> myMap;
	Node *cha;
	Node *con;
	for(int i=0;i<n;i++){
		cin>>u>>v>>x;
		if(myMap.find(u) == myMap.end()){
			cha = createNode(u);
			myMap[u] = cha;
			if(root == NULL){
				root = cha;
			}
		}
		else{
			cha = myMap[u];
		}
		con = createNode(v);
		myMap[v] = con;
		if(x == 'R'){
			cha->right  = con;
		}
		else if(x == 'L'){
			cha->left = con;
		}
	}
	return root;
}

int sum(Node *root){
	if(root == NULL){
		return 0;
	}
	return sum(root->left) + root->data + sum(root->right);
}

bool sumTree(Node *root){
	if(root == NULL){	// cay rong
		return true;
	}
	if(root->left == NULL && root->left == NULL){	// cay co 1 node
		return true;
	}
	int sumLeft = sum(root->left);
	int sumRight = sum(root->right);
	if(root->data == (sumLeft + sumRight) && sumTree(root->left) && sumTree(root->right)){
		return true;
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		Node *root = NULL;
		root = buildTree(root,n);
		cout<<sumTree(root)<<"\n";
	}
	return 0;
}

