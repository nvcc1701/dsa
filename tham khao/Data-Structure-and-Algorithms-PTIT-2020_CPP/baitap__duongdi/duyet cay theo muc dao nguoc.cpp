#include<bits/stdc++.h>
using namespace std;

// contest11/bai8duyetCay6
// reverse level order

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

void printReverseLevelOrder(Node *root){
	if(root == NULL){
		return;
	}
	stack<Node *> myS;
	queue<Node *> myQ;
	myQ.push(root);
	while(!myQ.empty()){
		myS.push(myQ.front());
		if(myQ.front()->right != NULL){
			myQ.push(myQ.front()->right);
		}
		if(myQ.front()->left != NULL){
			myQ.push(myQ.front()->left);
		}
		myQ.pop();
	}
	while(!myS.empty()){
		cout<<myS.top()->data<<" ";
		myS.pop();
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
		printReverseLevelOrder(root);
	}
	return 0;
}

