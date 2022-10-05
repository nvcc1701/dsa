#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

// contest3/bai20dauNgoacDung

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		vector<int> pos; // luu vi tri cua ki tu '['
		for(int i=0;i<str.length();i++){
			if(str[i] == '['){
				pos.push_back(i); // push vi tri xuat hien '['
			}
		}
		int count = 0; // dem so ky tu '[' da gap
		int next = 0; // theo doi vi tri xuat hien '[' tiep theo
		long long res = 0;
		for(int i=0;i<str.length();i++){
			if(str[i]=='['){
				count++;next++;
			}
			else if(str[i]==']'){
				count--;
			}
			if(count<0){ // neu mat can bang
				res += pos[next] - i;
				swap(str[i],str[pos[next]]);
				next++;
				count = 1;
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}

