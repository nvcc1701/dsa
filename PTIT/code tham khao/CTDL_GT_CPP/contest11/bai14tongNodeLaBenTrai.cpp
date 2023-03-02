#include<bits/stdc++.h>
using namespace std;

// contest11/bai14tongNodeLaBenTrai

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
	map<int,Node *> myMap;
	int u,v;
	char x;
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
			cha->right = con;
		}
		else if(x == 'L'){
			cha->left = con;
		}
	}
	return root;
}

bool checkLa(Node *la){
	if(la == NULL){
		return false;
	}
	if(la->left == NULL && la->right == NULL){
		return true;
	}
	return false;
}

int tongNodeLaBenTrai(Node *root){
	int sumLeft = 0;
	if(root != NULL){
		if(checkLa(root->left)){
			sumLeft += root->left->data;
		}
		else{
			sumLeft += tongNodeLaBenTrai(root->left);
		}
		sumLeft += tongNodeLaBenTrai(root->right);
	}
	return sumLeft;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		Node *root = NULL;
		root = buildTree(root,n);
		cout<<tongNodeLaBenTrai(root)<<"\n";
	}
	return 0;
}

