#include<bits/stdc++.h>
using namespace std;

// contest4/bai26hecosoK

int main(){	
	string a,b;
	int k;
	cin>>k>>a>>b;
	int lena = a.length();
	int lenb = b.length();
	if(lena<lenb){
		swap(a,b);
		swap(lena,lenb);
	}
	for(int i=0;i<lena - lenb;i++){
		b.insert(b.begin(),'0');
	}
	int nho = 0;
	int temp;
	string res;
	for(int i=lena-1;i>=0;i--){
		temp = a[i]-'0' + b[i]-'0' + nho;
		res.insert(res.begin(),temp%k+'0');
		nho=temp/k;
		temp/=k;
	}
	if(nho>0){
		res.insert(res.begin(),nho+'0');
	}
	cout<<res<<"\n";
	return 0;
}

