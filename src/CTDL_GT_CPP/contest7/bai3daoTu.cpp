#include<bits/stdc++.h>
using namespace std;

// contest7/bai3daoTu

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string str;
		getline(cin,str);
		vector<string> res;
		string temp;
		int index = 0;
		while((index = str.find(" ")) != -1){
			temp = str.substr(0,index);
			reverse(temp.begin(),temp.end());
			res.push_back(temp);
			str.erase(0,index + 1);
		}
		reverse(str.begin(),str.end());
		res.push_back(str);
		for(int i=0;i<res.size()-1;i++){
			cout<<res[i]<<" ";
		}
		cout<<res[res.size()-1]<<"\n";
		res.clear();
	}
	return 0;
}

