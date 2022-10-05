#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		stack<pair<int,int> > myS1;
		stack<pair<int,int> > myS2;
		int soHang,soMu;
		for(int i=0;i<s1.length();i++){
			if((i == 0 || s1[i-1] == ' ') && isdigit(s1[i])) {
				soHang = 0;
				while(isdigit(s1[i])){
					soHang = soHang * 10 + s1[i] - '0';
					i++;
				}
				i--;
			}
			else if(s1[i-1] == '^' && isdigit(s1[i])){
				soMu = 0;
				while(isdigit(s1[i]) && i<s1.length()){
					soMu = soMu * 10 + s1[i] - '0';
					i++;
				}
				i--;
				myS1.push(make_pair(soHang,soMu));
			}
		}
		for(int i=0;i<s2.length();i++){
			if((i == 0 || s2[i-1] == ' ') && isdigit(s2[i])) {
				soHang = 0;
				while(isdigit(s2[i])){
					soHang = soHang * 10 + s2[i] - '0';
					i++;
				}
				i--;
			}
			else if(s2[i-1] == '^' && isdigit(s2[i])){
				soMu = 0;
				while(isdigit(s2[i]) && i<s2.length()){
					soMu = soMu * 10 + s2[i] - '0';
					i++;
				}
				i--;
				myS2.push(make_pair(soHang,soMu));
			}
		}
		stack<pair<int,int> >myS3;
		pair<int,int> x1;
		pair<int,int> x2;
		while(!myS1.empty() && !myS2.empty()){
			x1 = myS1.top();
			x2 = myS2.top();
			if(x1.second == x2.second){
				myS3.push(make_pair(x1.first+x2.first,x1.second));
				myS1.pop();
				myS2.pop();
			}
			else if(x1.second > x2.second){
				myS3.push(make_pair(x2.first,x2.second));
				myS2.pop();
			}
			else{
				myS3.push(make_pair(x1.first,x1.second));
				myS1.pop();
			}
		}
		while(!myS1.empty()){
			x1 = myS1.top();
			myS3.push(make_pair(x1.first,x1.second));
			myS1.pop();
		}
		while(!myS2.empty()){
			x2 = myS2.top();
			myS3.push(make_pair(x2.first,x2.second));
			myS2.pop();
		}
		int size = myS3.size();
		while(size>1){
			pair<int,int> x = myS3.top();
			myS3.pop();
			cout<<x.first<<"*x^"<<x.second<<" + ";
			size--;
		}
		pair<int,int> x = myS3.top();
		myS3.pop();
		cout<<x.first<<"*x^"<<x.second<<"\n";
	}
	return 0;
}

