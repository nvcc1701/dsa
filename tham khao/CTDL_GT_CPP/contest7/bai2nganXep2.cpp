#include<bits/stdc++.h>
using namespace std;

// contest7/bai2nganXep2

int main(){
	int n;
	cin>>n;
	string str;
	int x;
	int stack[1001];
	int dau=0;
	for(int i=0;i<n;i++){
		cin>>str;
		if(str == "PUSH"){
			cin>>x;
			stack[dau++] = x;
		}
		if(str == "PRINT"){
			if(dau==0){
				cout<<"NONE"<<"\n";
			}
			else{
				cout<<stack[dau-1]<<"\n";
			}
		}
		if(str == "POP"){
			if(dau==0){
				continue;
			}
			else{
				dau--;
			}
		}
	}
	return 0;
}

