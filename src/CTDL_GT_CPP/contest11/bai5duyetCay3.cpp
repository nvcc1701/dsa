#include<bits/stdc++.h>
using namespace std;

// contest11/bai5duyetCay3
// level order

struct Node {
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
	while(n--){
		cin>>u>>v>>x;
		Node *cha;
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
		Node *con = createNode(v);
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

void printTree(Node *root){
	if(root == NULL){
		return;
	}
	queue<Node *> myQ;
	myQ.push(root);
	while(!myQ.empty()){
		cout<<myQ.front()->data<<" ";
		if(myQ.front()->left != NULL){
			myQ.push(myQ.front()->left);
		}
		if(myQ.front()->right != NULL){
			myQ.push(myQ.front()->right);
		}
		myQ.pop();
	}
	cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		Node *root = NULL;
		root = buildTree(root,n);
		printTree(root);
	}
	return 0;
}

