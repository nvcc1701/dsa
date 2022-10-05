#include<bits/stdc++.h>
using namespace std;

// contest9/bai4DSKeSangMTKe

int a[1000][1000];
int n;

void DSKeSangMTKe(){
//	memset(a,0,sizeof(a));
	cin>>n;
	string s;
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,s);
		int temp = 0;
		for(int j=0;s[j]!='\0';j++){
			if(s[j] >= '0' && s[j] <= '9'){
				temp = temp*10 + s[j] - '0';
			}
			if(s[j] == ' ' || s[j+1] == '\0'){
				a[i][temp-1] = 1;
				temp = 0;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main(){
	DSKeSangMTKe();
	return 0;
}

