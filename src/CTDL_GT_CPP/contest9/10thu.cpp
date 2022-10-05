#include <bits/stdc++.h>

using namespace std;

bool chuaxet[1001];
int path[1001];
int kt[1001];

struct Edge{
    int dau;
	int cuoi;
};

bool cmp(Edge a,Edge b){
	if(a.dau == b.dau){
		return a.cuoi < b.cuoi;
	}
	return a.dau < b.dau;
}

void findCycle_DFS(int s, Edge listEdge[],int E);
void disPlay(int s, int t);

main()
{
	int t; cin>>t;
	while(t--)
	{
		int V,E,s,t;
		cin>>V>>E>>s>>t;
		memset(path,0,sizeof(path));
		
		Edge listEdge[E];
		for(int i = 1 ; i <= E ; i++)
		{
			cin>>listEdge[i].dau>>listEdge[i].cuoi;
		}
		sort(listEdge+1,listEdge+E+1,cmp);
		for(int i = 1 ; i <= V; i++) chuaxet[i] = 1;
		
		findCycle_DFS(s,listEdge,E);
		
		disPlay(s,t);
	}
}

void findCycle_DFS(int s, Edge listEdge[],int E)
{
	chuaxet[s] = 0;
	for(int u = 1 ; u <= E ; u++)
	{
		if(listEdge[u].dau == s && chuaxet[listEdge[u].cuoi])
		{
			path[listEdge[u].cuoi] = s;
			findCycle_DFS(listEdge[u].cuoi,listEdge,E);
		}
	}
}

void disPlay(int s, int t)
{
	if(path[t] == 0) cout<<"-1\n";
	else
	{
		vector<int> res;
		res.push_back(t);
		int u = t;
		while(path[u]!=s)
		{
			res.push_back(path[u]);
			u = path[u];
		}
		res.push_back(s);
		for(int i = res.size()-1; i>=0 ; i--)
		    cout<<res[i]<<" ";
		cout<<"\n";
	}
}
