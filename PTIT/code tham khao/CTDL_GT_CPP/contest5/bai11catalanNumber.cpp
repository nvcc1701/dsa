#include<bits/stdc++.h>
using namespace std;

// contest5/bai11catalanNumber
//const long long modulo = 1e+7;

string cong(string s1,string s2){
	if(s1.length()<s2.length()){
		swap(s1,s2);
	}
	int n = s1.length(),m = s2.length();
	for(int i=0;i<n-m;i++){
		s2.insert(s2.begin(),'0');
	}
	int nho = 0;
	int temp;
	string res = "";
	for(int i=n-1;i>=0;i--){
		temp = s1[i] - '0' + s2[i] - '0' + nho;
		res.insert(res.begin(),temp%10+'0');
		nho = temp/10;
		temp/=10;
	}
	if(nho>0){
		res.insert(res.begin(),nho+'0');
	}
	while(res[0] == '0' && res.size()>1){
		res.erase(res.begin());
	}
	return res;
}

string nhan(string s1,string s2){
	string res = "";
	int n = s1.length();
	int m = s2.length();
	for(int i=n-1;i>=0;i--){
		int nho = 0;
		int temp;
		string tmp = "";
		for(int j=m-1;j>=0;j--){
			temp = (s1[i] - '0') * (s2[j] - '0') + nho;
			tmp.insert(tmp.begin(),temp%10+'0');
			nho = temp/10;
			temp/=10;
		}
		if(nho>0){
			tmp.insert(tmp.begin(),nho+'0');
		}
		for(int j=0;j<n-i-1;j++){
			tmp.push_back('0');
		}
		res = cong(res,tmp);
	}
	while(res[0] == '0' && res.size()>1){
		res.erase(res.begin());
	}
	return res;
}

string catalanNum(int n){
//	long long *cn = new long long [n+1];
//	cn[0] = cn[1] = 1;
	string cn[n+1];
	cn[0] = cn[1] = '1';
	for(int i=2;i<=n;i++){
		cn[i] = '0';
	}
	for(int i=2;i<=n;i++){
		for(int j=0;j<i;j++){
//			cn[i] = (cn[i] + (cn[j] * cn[i-j-1])%modulo)%modulo;
//			cn[i] += cn[j] * cn[i-j-1];
			cn[i] = cong(cn[i],nhan(cn[j],cn[i-j-1]));
		}
	}
//	cn[0] = cn[1] = 1;
//	for(int i=2;i<=n;i++){
//		cn[i] = ((4*i-2)*cn[i-1])/(i+1);
//		cn[i] %= modulo;
//	}
	return cn[n];
}

int main(){
	int t;
	cin>>t;	
	while(t--){
		int n;
		cin>>n;
		cout<<catalanNum(n)<<"\n";
	}
	return 0;
}

