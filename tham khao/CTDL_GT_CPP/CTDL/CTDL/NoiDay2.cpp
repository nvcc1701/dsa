#include<bits/stdc++.h>
using namespace std;
int a[1000000];
long long m = 1e9 + 7;
main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long long val;
		priority_queue< long long, vector<long long>, greater<long long> > pq;
		for(int i=0; i<n; i++){
			cin>>val;
			pq.push(val);
		}
		long long cost = 0;
		while(pq.size()>1){
			long long value1 = pq.top(); pq.pop();
			long long value2 = pq.top(); pq.pop();
			long long tmp = (value1 + value2)%m;
			cost += tmp;
			pq.push(tmp);
			cost %= m;
		}
		cout<<cost<<endl;	
	}

}
