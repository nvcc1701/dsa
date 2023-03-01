#include<bits/stdc++.h>
using namespace std;

// contest11/bai25cayNhiPhanTimKienCanBang2

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

Node *arrayToBlancedBST(int arr[],int start,int end){
	if(start > end){
		return NULL;
	}
	int mid = (start + end) / 2;
	Node *root = createNode(arr[mid]);
	root->left = arrayToBlancedBST(arr,start,mid-1);
	root->right = arrayToBlancedBST(arr,mid+1,end);
	return root;
}

void printPreorder(Node *root){
	if(root != NULL){
		cout<<root->data<<" ";
		printPreorder(root->left);
		printPreorder(root->right);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		Node *root = arrayToBlancedBST(arr,0,n-1);
		printPreorder(root);
		cout<<"\n";
	}
	return 0;
}

