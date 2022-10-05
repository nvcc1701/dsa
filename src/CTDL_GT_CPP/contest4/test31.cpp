#include <bits/stdc++.h>
using namespace std;
const long long base = 1000000007;
int n;
struct MaTran
{
    long long c[100][100];
    void nhap(){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> c[i][j];
            }
        }
    }
    void xuat(){
    	for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                 cout << c[i][j]<<" ";
            }
            cout << endl;
        }
    }
};
 
MaTran operator * (MaTran a, MaTran b){
    MaTran res;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++)
        {
            res.c[i][j] = 0;
            for (int k=0; k<n; k++){
                res.c[i][j] += a.c[i][k]*b.c[k][j];
                res.c[i][j] %= base;
        	}
        }
    }
    return res;
}
 
MaTran powermod (MaTran a, long long k)
{
    if (k==1)
        return a;
    else if(k%2==0){
    	MaTran tmp = powermod(a,k/2);
    	return tmp*tmp;
	}
    else
        return powermod(a,k-1)*a;
}
 
int main()
{
    int t;
    cin >> t;
    long long k;
    while (t--)
    {
        MaTran A;
        cin >> n>>k;
        A.nhap();
        MaTran B = powermod(A,k);
        B.xuat();
    }
 
    return 0;
}
