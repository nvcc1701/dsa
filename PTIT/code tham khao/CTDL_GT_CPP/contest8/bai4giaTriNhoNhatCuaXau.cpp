#include<bits/stdc++.h>
using namespace std;

// contest8/bai4giaTriNhoNhatCuaXau

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int k;
		string s;
		cin>>k>>s;
		int count[26];
		for(int i=0;i<26;i++){
			count[i] = 0;
		}
		priority_queue<int> myPQ;
		for(int i=0;i<s.length();i++){
			count[s[i]-'A']++;
		}
		int x = 0;
		for(int i=0;i<26;i++){
			if(count[i]>0){
				myPQ.push(count[i]);
				x += count[i];
			}
		}
		if(k>=x){
			cout<<0<<"\n";
		}
		else{
			for(int i=0;i<k;i++){
				int t = myPQ.top();
				myPQ.pop();
				t--;
				myPQ.push(t);
			}	
			long long res = 0;
			while(!myPQ.empty()){
				int t = myPQ.top();
				myPQ.pop();
				res += (long long)t*t;
			}
			cout<<res<<"\n";
		}
	}
	return 0;
}

