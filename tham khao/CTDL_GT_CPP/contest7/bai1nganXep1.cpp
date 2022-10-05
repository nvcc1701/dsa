#include<bits/stdc++.h>
using namespace std;

// contest7/bai1nganXep1

int main(){
	int stack[201];
	int dau = 0;
	int t;
	string str;
	while(cin>>str){
		if(str == "push"){
			cin>>t;
			stack[dau++] = t;
		}
		if(str == "show"){
			for(int i=0;i<dau;i++){
				cout<<stack[i]<<" ";
			}
			cout<<"\n";
		}
		if(str == "pop"){
			dau--;
			if(dau==0){
				cout<<"empty";
				break;
			}
		}
	}
	return 0;
}

