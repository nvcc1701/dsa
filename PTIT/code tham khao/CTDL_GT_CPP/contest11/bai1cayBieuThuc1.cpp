#include<bits/stdc++.h>
using namespace std;

// contest11/bai1cayBieuThuc1

bool toanTu(char c){
	return(c == '-' || c == '+' || c == '*' || c == '/' || c == '^');
}

struct tree{
	char value;
	tree *left, *right;
};

tree *creatNode(char c){
	tree *temp = new tree;
	temp->left = temp->right = NULL;
	temp->value = c;
	return temp;
}

void display(tree *t){
	if(t){
		display(t->left);
		cout<<t->value<<" ";
		display(t->right);
	}
}

tree *cayBieuThuc1(string str){
	stack<tree*> myS;
	tree *t, *t1, *t2;
	for(int i=0;i<str.length();i++){
		if(!toanTu(str[i])){
			t = creatNode(str[i]);
			myS.push(t);
		}
		else{
			t = creatNode(str[i]);
			t1 = myS.top();
			myS.pop();
			t2 = myS.top();
			myS.pop();
			t->right = t1;
			t->left = t2;
			myS.push(t);
		}
	}
	return myS.top();
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		tree *t = cayBieuThuc1(str);
		display(t);
		cout<<"\n";
	}
	return 0;
}

