#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin>>t;
	while(t--){
		int k;
		string s;
		cin>>k>>s;
		int a[1000] = {0};
		for(int i=0; i<s.size(); i++){
			a[s[i]]++;
		}
		priority_queue< int , vector<int> > q;
		for(int i=0; i<s.size(); i++){
			if(a[s[i]] > 0){
				q.push(a[s[i]]); 
				a[s[i]] = 0;
			}
		}
		while(k>0 && q.size()>0){
			k--;
			int n=q.top(); q.pop();
			n--;
			q.push(n);
		}
		long long res=0;
		while(q.size()>0){
			int n=q.top(); q.pop();
			res += n*n;
		}
		cout<<res<<endl;
	}
}
