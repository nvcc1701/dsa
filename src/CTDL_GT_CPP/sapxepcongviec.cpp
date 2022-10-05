#include<bits/stdc++.h>
using namespace std;
struct task{
	int start, finish;
};
task a[1005];
int n;
bool cmp(task a, task b){
	return a.finish < b.finish;
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++) cin>>a[i].start;
		for(int i=0; i<n; i++) cin>>a[i].finish;
		sort(a, a+n, cmp);
		int dem=1, i=0;
		for(int j=1; j<n; j++){
			if(a[j].start >= a[i].finish){
				dem++;
				i=j;
			}
		}
		cout<<dem<<endl;
	}
}
