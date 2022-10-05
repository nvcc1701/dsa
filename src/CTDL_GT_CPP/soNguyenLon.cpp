#include<bits/stdc++.h>
using namespace std;
int F[1005][1005]={0};
main(){
	int t; cin>>t;
	while(t--){
		string N , M;
		cin >> N >> M;
		int res=0;
		for(int i=1; i<=N.size(); i++){
			for(int j=1; j<=M.size(); j++){
				if(N[i-1]==M[j-1]){
					F[i][j] = F[i-1][j-1] + 1;
				}
				else F[i][j] = max(F[i-1][j], F[i][j-1]);
				res = max(res, F[i][j]);
			}
		}
		cout<<res<<endl;
	}
}
