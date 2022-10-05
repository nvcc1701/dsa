#include<bits/stdc++.h>
using namespace std;
int n;
int b[100];
vector<vector<int> > res;
bool ok[100];

void Try(int i){
	for(int j=1;j<=n;j++)
	{
		if(!ok[j])
		{
			b[i]=j;
			ok[j]=true;
			if(i==n){
				vector<int> a;
				for(int j=1;j<=n;j++)
					a.push_back(b[j]);
				res.push_back(a);	
			}
			else Try(i+1);
			ok[j] = false;
			}
		}
	}

void Res()
	{
		for(int i=0;i<=res.size()-1;i++){
			for(int j=0;j<res[i].size();j++)
				cout<< res[i][j];
		
			cout<<" ";
		}
		cout << '\n';
	
	}
			
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>> t;
	while(t--){
		cin >> n;
		res.clear();
		memset(ok,false,sizeof(ok));
		Try(1);
		Res();
		}
		return 0;
	}
