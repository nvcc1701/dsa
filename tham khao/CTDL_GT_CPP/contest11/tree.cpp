#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
	int data;
	Node *left;
	Node *right;
} *Tree;

void init(Tree *t){
	*t = NULL;
}

Tree getNode(){	// cap mien nho cho node
	Tree p;
	p = new Node();
	return p;
}

Tree creatNode(int x){ // tao 1 node cho cay 
	Tree p;
	p = getNode();
	p->data = x;
	p->left = p->right = NULL;
	return p;
}

Tree search(Tree t,int x){		// tim node p co noi dung la x tren cay
	Node *p;
	if(t->data == x){
		return t;
	}
	if(t == NULL){
		return NULL;
	}
	p = search(t->left,x);
	if(p == NULL){
		p = search(t->right,x);
	}
	return p;
}

int main(){
	
	return 0;
}

