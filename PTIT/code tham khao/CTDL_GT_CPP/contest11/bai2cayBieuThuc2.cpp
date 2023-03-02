#include<bits/stdc++.h>
using namespace std;

// contest11/bai2cayBieuThuc2

struct Node {
	string data;
	Node *left = NULL;
	Node *right = NULL;
};

int tinh(string s,int a,int b){
	if(s == "+"){
		return a+b;
	}
	else if(s == "-"){
		return a-b;
	}
	else if(s== "*"){
		return a*b;
	}
	else{
		return a/b;
	}
}

Node *newNode(string s){
	Node *p = new Node;
	p->data = s;
	p->left = p->right = NULL;
	return p; 
} 

int toInt(string s){
	int num = 0;
	for(int i=0;i<s.length();i++){
		num = num*10 + (s[i]-'0');
	}
	return num;
}

Node *insert(Node *root,string s,queue<Node *> &myQ){
	Node *node = newNode(s);
	if(root == NULL){
		root = node;
	}
	else if(myQ.front()->left == NULL){
		myQ.front()->left = node;
	}
	else{
		myQ.front()->right = node;
		myQ.pop();
	}
	myQ.push(node);
	return root;
}

Node *createTree(string s[],int n){
	Node *root = NULL;
	queue<Node *> myQ;
	for(int i=0;i<n;i++){
		root = insert(root,s[i],myQ);
	}
	return root;
}

int cayBieuThuc2(Node *root){
	if(!root){
		return 0;
	}
	if(!root->left && !root->right){
		return toInt(root->data);
	}
	int left_value = cayBieuThuc2(root->left);
	int right_value = cayBieuThuc2(root->right);
	return tinh(root->data,left_value,right_value);
}

void printRoot(Node *root){
	queue<Node *> myQ;
	if(root == NULL){
		return;
	}
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
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		Node *root = NULL;
		root = createTree(s,n);
		cout<<cayBieuThuc2(root)<<"\n";
	}
	return 0;
}

