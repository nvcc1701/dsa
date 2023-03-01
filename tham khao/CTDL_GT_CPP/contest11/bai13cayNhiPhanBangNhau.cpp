#include<bits/stdc++.h>
using namespace std;

// contest11/bai13cayNhiPhanBangNhau

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

bool cayNhiPhanBangNhau(Node *root1, Node *root2){
	if(root1 == NULL && root2 == NULL){
		return true;
	}
	if(root1 != NULL && root2 != NULL){
		return (root1->data == root2->data && cayNhiPhanBangNhau(root1->left,root2->left) && cayNhiPhanBangNhau(root1->right,root2->right));
	}
	return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;;
		cin>>n;
		Node *root1 = NULL;
		root1 = buildTree(root1,n);
		cin>>m;
		Node *root2 = NULL;
		root2 = buildTree(root2,m);
		cout<<cayNhiPhanBangNhau(root1,root2)<<"\n";
	}
	return 0;
}

