#include<bits/stdc++.h>
using namespace std;

// contest11/bai17bienDoiSangCayNhiPhanTimKiem

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
	map<int, Node *> myMap;
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

void toInOrder(Node *root,int in[],int &in_Index){
	if(root == NULL){
		return;
	}
	toInOrder(root->left,in,in_Index);
	in[in_Index++] = root->data;
	toInOrder(root->right,in,in_Index);
}

int countNode(Node *root){
	if(root == NULL){
		return 0;
	}
	return countNode(root->left) + 1 + countNode(root->right);
}

void arrayToBST(int *in,Node *root,int &in_Index){
	if(root == NULL){
		return;
	}
	arrayToBST(in,root->left,in_Index);
	root->data = in[in_Index++];
	arrayToBST(in,root->right,in_Index);
}

void binaryTreeToBST(Node *root){
	if(root == NULL){
		return;
	}
	int nodes = countNode(root);
	int *in = new int[nodes];
	int in_Index = 0;
	toInOrder(root,in,in_Index);
	sort(in,in + in_Index);
	in_Index = 0;
	arrayToBST(in,root,in_Index);
	delete[] in;
}

void printInOrder(Node *root){
	if(root != NULL){
		printInOrder(root->left);
		cout<<root->data<<" ";
		printInOrder(root->right);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		Node *root = NULL;
		root = buildTree(root,n);
		binaryTreeToBST(root);
		printInOrder(root);
		cout<<"\n";
	}
	return 0;
}
  
