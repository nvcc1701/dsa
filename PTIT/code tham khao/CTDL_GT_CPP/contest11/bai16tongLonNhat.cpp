#include<bits/stdc++.h>
using namespace std;

// contest11/bai16tongLonNhat

#define INF 1e9

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

Node *buildTree(Node *root, int n){
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

int maxSum(Node *root,int &res){
	if(root == NULL){
		return 0;
	}
	if(root->left == NULL && root->right == NULL){
		return root->data;
	}
	int left_Sum = maxSum(root->left,res);
	int right_Sum = maxSum(root->right,res);
	if(root->left != NULL && root->right != NULL){
		res = max(res,left_Sum + right_Sum + root->data);
		return max(left_Sum,right_Sum) + root->data;
	}
	if(root->left == NULL){
		return right_Sum + root->data;
	}
	else{
		return left_Sum + root->data;
	}
}

int solve(Node *root){
	int res = -INF;
	maxSum(root,res);
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		Node *root = buildTree(root,n);
		cout<<solve(root)<<"\n";
	}
	return 0;
}
 
