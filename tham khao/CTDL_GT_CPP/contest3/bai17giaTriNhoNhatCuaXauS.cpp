#include<bits/stdc++.h>
using namespace std;

// contest3/bai14/giaTriNhoNhatCuaXauS

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		int k;
		cin>>k>>s;
		int count[26];
		for(int i=0;i<26;i++){
			count[i] = 0;
		}
		for(int i=0;i<s.length();i++){
			count[s[i]-'A']++;
		}
		int soLan[s.length()];
		int soLuong = 0;
		for(int i=0;i<26;i++){
			if(count[i]){
				soLan[soLuong++] = count[i];
			}
		}
		for(int i=1;i<=k;i++){
			sort(soLan,soLan+soLuong);
			soLan[soLuong-1]--;
		}
		long long res = 0;
		for(int i=0;i<soLuong;i++){
			res+=pow(soLan[i],2);
		}
		cout<<res<<"\n";
	}
	return 0;
}
