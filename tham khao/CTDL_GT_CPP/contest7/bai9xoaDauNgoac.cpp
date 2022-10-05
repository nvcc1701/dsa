#include<bits/stdc++.h>
using namespace std;

// contest7/bai9xoaDauNgoac

vector<pair<int,int> > vec;
string str;
set<string> res;
stack<int> myS;
int s;
int x[11];

void update(){
	string temp = "";
	for(int i=0;i<str.length();i++){
		bool check = true;
		for(int j=0;j<vec.size();j++){
			if(x[j] == 1 &&(i == vec[j].first || i == vec[j].second)){
				check = false;
				break;
			}
		}
		if(check){
			temp = temp + str[i];
		}
	}
	res.insert(temp);
}

void Try(int i){
	for(int j=0;j<=1;j++){
		x[i] = j;
		s += j;
		if(i == vec.size() - 1){
			if(s > 0){
				update();
			}
		}
		else{
			Try(i+1);
		}
		s -= j;
	}
}

int main(){
//	int t;
//	cin>>t;
//	while(t--){
		cin>>str;
		for(int i=0;i<str.length();i++){
			if(str[i] == '('){
				myS.push(i);
			}
			else if(str[i] == ')' && !myS.empty()){
				vec.push_back(make_pair(myS.top(),i));
				myS.pop();
			}
		}
		Try(0);
		set<string> :: iterator it;
		for(it = res.begin();it != res.end();it++){
			cout<<*it<<"\n";
		}
//	}
	return 0;
}

