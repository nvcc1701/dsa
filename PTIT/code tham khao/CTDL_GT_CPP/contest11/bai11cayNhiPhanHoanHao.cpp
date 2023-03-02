#include<bits/stdc++.h>
using namespace std;

// contest11/bai11cayNhiPhanHoanHao
// moi node (khac la) co 2 nut con

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

int depthOfTree(Node *root){
	int depth = 0;
	while(root != NULL){
		depth++;
		root = root->left;
	}
	return depth;
}

bool cayHoanHao(Node *root,int depth,int level){
	if(root == NULL){
		return true;
	}
	if(root->right == NULL && root->left == NULL){
		return (depth == level + 1);
	}
	if(root->left == NULL || root->right == NULL){
		return false;
	}
	return cayHoanHao(root->left,depth,level + 1) && cayHoanHao(root->right,depth,level+1);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		Node *root = NULL;
		root = buildTree(root,n);
		int depth = depthOfTree(root);
		if(cayHoanHao(root,depth,0)){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
	}
	return 0;
}

