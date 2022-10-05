#include <iostream>
#include <vector>

using namespace std;

vector<long long> Sinh_Khoi(long long n)
  {
  	vector<long long> khoi;
  	
  	for(long long i=1;i*i*i<=n;i++) khoi.push_back(i*i*i);
  	
  	return khoi;
  }
  
bool KT_Khoi(long long n, long long x)
 {
 	while(n!=0)
 	 {
 		if(x%10==n%10)
 		  {
 		  	x=x/10;
 		  	if(x==0) return 1;
		  }
		n=n/10;
	 }
	return 0;
 }

int main()
  {
  	int t, ok;
  	long long n;
  	
  	cin >> t;
  	
  	while(t--)
  	  {
  	  	cin >> n;
  	  	
  	  	vector<long long> cube = Sinh_Khoi(n);
  	  	ok=0;
  	  	for(int i=cube.size()-1;i>=0;i--)
  	  	  if(KT_Khoi(n, cube.at(i)))
  	  	    {
  	  	      cout << cube.at(i) << "\n";
  	  	      ok=1;
  	  	      break;
			}
		if(!ok) cout << "-1\n";
	  }
	return 0;
  }
