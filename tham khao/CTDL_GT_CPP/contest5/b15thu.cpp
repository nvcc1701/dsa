#include <bits/stdc++.h>

using namespace std;

// idea: xay dung mot mang 3 chieu tim cac ket

int findStr(string X, string Y, string Z, int n, int m, int o)
{
	int ***L = new int**[n+1];
	
	for(int i = 0 ; i <= n ; i++)
	{
		L[i] = new int*[m+1];
		for(int j = 0 ; j <= m ; j++)
		    L[i][j] = new int[o+1];
	} 
// 	 memset(L,0,sizeof(L));
  //xay dung cong thuc truy hoi//
   
    for (int i=0; i<=n; i++) 
    { 
        for (int j=0; j<=m; j++) 
        { 
            for (int k=0; k<=o; k++) 
            { 
                if (i == 0 || j == 0||k==0) 
                    L[i][j][k] = 0; 
  
                else if (X[i-1] == Y[j-1] && X[i-1]==Z[k-1]) 
                    L[i][j][k] = L[i-1][j-1][k-1] + 1; 
  
                else
                    L[i][j][k] = max(max(L[i-1][j][k], 
                                         L[i][j-1][k]), 
                                    		 L[i][j][k-1]); 
            } 
        } 
    } 
    return L[n][m][o]; 
}

int main()
{
	int t; cin>>t;
//	cin.ignore();
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		char x;
		string s1,s2,s3;
		for(int i=0;i<a;i++){
			cin>>x;
			s1.push_back(x);
		}
		for(int i=0;i<b;i++){
			cin>>x;
			s2.push_back(x);
		}
		for(int i=0;i<c;i++){
			cin>>x;
			s3.push_back(x);
		}
		cout<<findStr(s1,s2,s3,a,b,c)<<"\n";
	}
	return 0;
}
