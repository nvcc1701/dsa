#include <iostream>
#include <algorithm>

using namespace std;

int n, m, kt=0;
long s, t[31];

void Tra_Tien(int, int, int);
void Tra_Tien(int i, int tien, int sl)
  {
  	if(tien==0 && sl<m)
	  {
	  	m=sl;
	  	kt=1;
	  	return;
	  }
  	if(i<1) return;
  	for(i;i>0;i--)
  	  if(tien-t[i]>=0)
  	    {
  	      tien=tien-t[i]; sl++;
  	  	  Tra_Tien(i-1, tien, sl);
  	  	  tien=tien+t[i]; sl--;
		}
  }

int main()
  {
  	cin >> n >> s;
  	
  	for(int i=1;i<=n;i++) cin >> t[i];
	sort(t+1, t+n+1);
	m=n;
	Tra_Tien(n, s, 0);
	if(kt==1) cout << m;
	  else cout << "-1";
	
	return 0;
  }
