#include <bits/stdc++.h>
using namespace std;
 
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
 
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
 
//void FileIO(){
//	freopen("input.txt","r", stdin);
//	freopen("output.txt","w",stdout);
//}
int n,k,a[100],ok=false;
void init(){
	FOR(i,1,n+1){
		a[i]=0;
	}
}
 
void next(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0;
		--i;
	}
	if(i==0) ok =false;
	else a[i]=1;
}
 
bool check(){
	int cnt=0;
	FOR(i,1,n+1) cnt+=a[i];
	return cnt==k;
}
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		ok=true;
		init();
		while(ok){
			if(check()){
				FOR(i,1,n+1) cout<<a[i];
				cout<<"\n";
			}
			next();
		}
	}
}
