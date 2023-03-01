#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		string str = "";
		for(int i=0;i<s.length();i++){
			if(s[i] == ' '){
				str += ' ';
			}
			else{
				str += s[i]-'a';
			}
		}
		cout<<str<<"\n";
	}
	return 0;
}

