#include<bits/stdc++.h>
using namespace std;
 
pair<int,int> ii;
vector< pair<int,int> > vtn;
int x[11];
int n;
int s=0;
string str;
set<string> res;

void update(){
	string s1="";
	for(int i=0;i<str.length();i++){
		bool check=true;
		for(int j=0;j<n;j++){
			if(x[j]==1 && (i==vtn.at(j).first || i==vtn.at(j).second)){
				check=false;
				break;
			}
		}
		if(check){
			s1=s1+str[i];
		}
	}
	res.insert(s1);
}

void Try(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		s+=j;
		if(i==n-1){
			if(s>0) update();
		}
		else Try(i+1);
		s-=j;
	}
}


int main(){
	cin>>str;
	stack<int> myStack;
	for(int i=0;i<str.length();i++){
		if(str[i]=='('){
			myStack.push(i);
		}
		else if(str[i]==')'){
			if(!myStack.empty()){
				ii.first=myStack.top();
				ii.second=i;
				vtn.push_back(ii);
				myStack.pop();
			}
		}
	}
	n=vtn.size();
	Try(0);
	for(set<string>::iterator it=res.begin();it!=res.end();it++) cout<<*it<<endl;
	return 0;
}
