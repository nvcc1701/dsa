#include<bits/stdc++.h>
using namespace std;

// bai 32 loai bo ngoac

string s;
bool res;

void init(){
	cin>>s;
	res = false;
}

bool xauNgoacDung(string s){
	int soNgoac = 0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='('){
			soNgoac++;
		}
		else if(s[i]==')'){
			soNgoac--;
		}
		if(soNgoac<0){ // ) , ()) ... => false.
			return false;
		}
	}
	if(soNgoac==0){
		return true;
	}
	return false;
}

bool ngoac(char c){
	return ((c=='(') || (c==')'));
}

void loaiBoNgoacThua(string s){
	if(s.empty()){
		return;
	}
	queue<string> myQueue;
	set<string> mySet; // cac phan tu la duy nhat
	string temp;
	bool check = false;
	
	myQueue.push(s);
	mySet.insert(s);
	while(!myQueue.empty()){
		s = myQueue.front();
		myQueue.pop();
		cout<<s<<"\n";
		if(xauNgoacDung(s)){
			check = true;
		}
		if(check) {
			continue;
		}
		for(int i=0;i<s.length();i++){
			if(!ngoac(s[i]) )continue;
			temp = s.substr(0,i) + s.substr(i+1);
			if(mySet.find(s) == mySet.end()){
				myQueue.push(temp);
				mySet.insert(temp);
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		init();
		for(int i=0;i<s.size();i++){
			if(s[i]=='('){
				continue;
			}
			else if(s[i]==')'){
				s.erase(s.begin()+i);
				s.insert(s.begin()+i,')');
//				break;
			}
		}
		cout<<s<<"\n";
	}
	return 0;
}

