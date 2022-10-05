#include<bits/stdc++.h>
using namespace std;

// contest4/bai36tichHaiSoNhiPhan
// karatsuba 
long long binary_To_Decimal(string s){
	int n = s.length();
	int t=0;
	long long num = 0;
	for(int i=n-1;i>=0;i--){
		num +=(s[i]-'0')*pow(2,t);
		t++;
	}
	return num;
}

long long multi(long long num1,long long num2){
	long long res = 0;
	int count = 0;
	while(num2){
		if(num2%2==1){
			res += num1<<count;
		}
		count++;
		num2/=2;
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		long long num1 = binary_To_Decimal(s1);
		long long num2 = binary_To_Decimal(s2);
		cout<<multi(num1,num2)<<"\n";
	}
	return 0;
}

