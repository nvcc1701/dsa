#include<bits/stdc++.h>
using namespace std;

// contest11/bai15tongNodeLaBenPhai

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
		if(x == 'L'){
			cha->left = con;
		}
		else if(x == 'R'){
			cha->right = con;
		}
	}
	return root;
}

bool checkLa(Node *root){
	if(root == NULL){
		return false;
	}
	if(root->left == NULL && root->right == NULL){
		return true;
	}
	return false;
}

int tongNodeLaBenPhai(Node *root){
	int sumRight = 0;
	if(root != NULL){
		if(checkLa(root->right)){
			sumRight += root->right->data;
		}
		else{
			sumRight += tongNodeLaBenPhai(root->right);
		}
		sumRight += tongNodeLaBenPhai(root->left);
	}
	return sumRight;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		Node *root = NULL;
		root = buildTree(root,n);
		cout<<tongNodeLaBenPhai(root)<<"\n";
	}
	return 0;
}

