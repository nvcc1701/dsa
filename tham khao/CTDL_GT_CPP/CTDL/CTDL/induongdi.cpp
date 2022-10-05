#include<bits/stdc++.h>
using namespace std;

void induongdi(){
	stack<int> st;
	st.push(v);
	while(st.top() != u){
		int t=st.top();
		st.push(truoc[t]);
	}
	while(!st.empty()){
		int t=st.top();
		st.pop();
		cout<<t<<" ";
	}
	cout<<endl;
}
main(){
	
}
