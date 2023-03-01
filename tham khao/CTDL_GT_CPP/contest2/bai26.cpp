#include<bits/stdc++.h>
using namespace std;

string s;
string maxS;

void maxString(int k){
	if(k==0){
		return;
	}
	for(int i=0;i<s.length()-1;i++){
		for(int j=i+1;j<s.length();j++){
			if(s[i]<s[j]){
				swap(s[i],s[j]);
				if(s.compare(maxS)>0){ // max < s => max = s;
					maxS=s;
				}
				maxString(k-1);
				swap(s[i],s[j]);
			}
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k>>s;
		maxS = s;
		maxString(k);
		cout<<maxS<<"\n";
	}
	return 0;
}
