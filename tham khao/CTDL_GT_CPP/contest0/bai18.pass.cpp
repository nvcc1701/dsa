#include<iostream>
#include<cstring>
using namespace std;

int countAppearOnce(int n,int m,char *s){
	int count=0;
	for(int i=n;i<m;i++){
		int count1 = 0;
		for(int j=n;j<m;j++){
			if(s[j]==s[i]) count1++;
			if(count1>1) break;
		}
		if(count1==1) count++;
	}
	return count;
}

int main()
{
	char s[52];
	cin>>s;
	int count = 0;
	
	int m = 0, n = strlen(s);
	while(s[m]==s[n-1]){
		m++;n--;
	}
	while(s[m]==s[m+1]) m+=2;
	while(s[n-1]==s[n-2]) n-=2;
	
	bool check[52];
	for(int i=0;i<52;i++) {
		check[i]=true;
	}
	
	for(int i=m;i<n-1;i++){
		if(check[i]){
			int j=i+1;
			while(s[j]!=s[i]) j++;
			check[j]=false;
			count+=countAppearOnce(i+1,j,s);
//			if(j==n-1) break;
		}
	}
	cout<<count/2;
	return 0;
}
