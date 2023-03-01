#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin>>t;
	while(t--){
		int k;
		string s;
		cin>>k>>s;
		int d[300]={0};
		for(int i=0; i<s.size(); i++){
			d[s[i]]++;
		}
		priority_queue< int, vector<int> > q;
		for(int i=0; i<s.size(); i++){
			if(d[s[i]]>0){
				q.push(d[s[i]]);
				d[s[i]]=0;
			}
		}
		while(k>0 && q.size()>0){
			k -= 1;
			int n = q.top(); q.pop();
			n--;
			q.push(n);
		}
		long long sum=0;
		while(q.size()>0){
			int n = q.top(); q.pop();
			sum += n*n;
		}
		cout<<sum<<endl;
	}
}
