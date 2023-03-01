#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool decrease_sort(int i, int j)
  {
  	return i>j;
  }

int main()
  {
  	int t, d;
  	string s;
  	
  	cin >> t;
  	
  	while(t--)
  	  {
  	  	cin >> d >> s;
  	  	int m[26], len=s.length(), ok=1;
  	  	string tam="";
  	  	for(int i=0;i<26;i++) m[i]=0;
  	  	
  	  	for(int i=0;i<len;i++)
		  {
		  	m[s.at(i)-'A']++;
		  	tam=tam+' ';
		  }
  	  	sort(m, m+26, decrease_sort);
  	  	
  	  	for(int i=0;i<26;i++)
  	  	  {
  	  	  	if(m[i]==0) continue;
  	  	  	int j=0;
  	  	  	while(tam.at(j)!=' ') j++;
  	  	  	for(j;j<len;j=j+d)
  	  	  	  {
  	  	  	  	tam.at(j)=char(i+'A');
  	  	  	  	m[i]--;
  	  	  	  	if(m[i]==0) break;
			  }
		  }
		for(int i=len-1;i>=0;i--)
		  if(tam.at(i)==' ')
		    {
		      ok=0;
		      break;
			}
		if(ok) cout << "1\n";
		  else cout << "-1\n";  
	  }
  	return 0;
  }
