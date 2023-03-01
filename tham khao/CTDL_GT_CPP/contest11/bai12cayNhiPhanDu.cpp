#include<bits/stdc++.h>
using namespace std;

// contest11/bai12cayNhiPhanDu
// moi node co 0 hoac 2 nut con

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
		if(myMap.find(u) == myMap.end() ){
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

bool cayDayDu(Node *root){
	if(root == NULL){
		return true;
	}
	if(root->right == NULL && root->left == NULL){
		return true;
	}
	if(root->left != NULL && root->right != NULL){
		return cayDayDu(root->left) && cayDayDu(root->right);
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
		cout<<cayDayDu(root)<<"\n";
	}
	return 0;
}

