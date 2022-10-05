#include<bits/stdc++.h>
using namespace std;

// contest11/bai7duyetCay5
// spiral order

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
			cha->right = con;
		}
		else if(x == 'L'){
			cha->left = con;
		}
	}
	return root;
}

void printSpiralOrder(Node *root){
	stack<Node *> s1;
	stack<Node *> s2;
	s1.push(root);
	while(!s1.empty() || !s2.empty()){
		while(!s1.empty()){
			Node *p = s1.top();s1.pop();
			cout<<p->data<<" ";
			if(p->right != NULL){
				s2.push(p->right);
			}
			if(p->left != NULL){
				s2.push(p->left);
			}
		}
		while(!s2.empty()){
			Node *p = s2.top();s2.pop();
			cout<<p->data<<" ";
			if(p->left != NULL){
				s1.push(p->left);
			}
			if(p->right != NULL){
				s1.push(p->right);
			}
		}
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
		printSpiralOrder(root);
	}
	return 0;
}

