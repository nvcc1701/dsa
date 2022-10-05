#include<bits/stdc++.h>
using namespace std;

// contest8/bai12khoangCachNganNhat

int khoangCachXauKiTu(string s,string t,set<string> &myS){
	if(myS.find(t) == myS.end()){	// neu t k co strong set
		return 0;
	}
	queue<string> myQ;
	myQ.push(s);
	int steps = 1;
	int n = s.length();
	while(!myQ.empty()){
		int size = myQ.size();
		while(size--){
			string str = myQ.front();
			myQ.pop();
			for(int i=0;i<n;i++){
				char temp = str[i];
				for(char c = 'A';c<='Z';c++){
					str[i] = c;
					if(str == t){
						return steps + 1;
					}
					if(myS.find(str) == myS.end()){	// neu str chua co trong set;
						continue;
					}
					else{	// da co trong set
						myS.erase(str);
						myQ.push(str);
					}
				}
				str[i] = temp;
			}
		}
		steps++;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s,t;
		cin>>s>>t;
		string str;
		set<string> myS;
		for(int i=0;i<n;i++){
			cin>>str;
			myS.insert(str);
		}
		cout<<khoangCachXauKiTu(s,t,myS)<<"\n";
	}
	return 0;
}

