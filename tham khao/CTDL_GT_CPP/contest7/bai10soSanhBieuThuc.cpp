#include<bits/stdc++.h>
using namespace std;

// contest7/bai10soSanhBieuThuc

bool truocNgoacLaDauTru(string str,int i){
	if(i > 0 && str[i-1] == '-'){
		return true;
	}
	return false;
}

void bienDoi(string str,vector<int> &v, bool add){
	stack<bool> myS;
	myS.push(true);
	for(int i=0;i<str.length();i++){
		if(str[i] == '+' || str[i] == '-'){
			continue;
		}
		if(str[i] == '('){
			if(truocNgoacLaDauTru(str,i)){
				myS.push(!myS.top());
			}
			else{
				myS.push(myS.top());
			}
		}
		else if(str[i] == ')' && !myS.empty()){
			myS.pop();
		}
		else{
			if(myS.top()){
				if(truocNgoacLaDauTru(str,i)){
					if(add){
						v[str[i] - 'a'] += 1;
					}
					else{
						v[str[i] - 'a'] += -1;
					}
				}
				else{
					if(add){
						v[str[i] - 'a'] += -1;
					}
					else{
						v[str[i] - 'a'] += 1;	
					}
				}
			}
			else{
				if(truocNgoacLaDauTru(str,i)){
					if(add){
						v[str[i] - 'a'] += -1;
					}
					else{
						v[str[i] - 'a'] += 1;
					}
				}
				else{
					if(add){
						v[str[i] - 'a'] += 1;
					}
					else{
						v[str[i] - 'a'] += -1;	
					}
				}
			}
		}
	}
}

bool giongNhau(string p1,string p2){
	vector<int> vec(26,0);
	bienDoi(p1,vec,true);
	bienDoi(p2,vec,false);
	for(int i=0;i<26;i++){
		if(vec[i] != 0){
			return false;
		}
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string p1,p2;
		cin>>p1>>p2;
		if(giongNhau(p1,p2)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}
