#include<bits/stdc++.h>
using namespace std;

// contest9/bai2dsKeSangDSCanh

vector<int> vec;

int main(){
//	int t;
//	cin>>t;
//	while(t--){
		int n;
		cin>>n;
		string s;
		cin.ignore();
		for(int i=0;i<n;i++){
			getline(cin,s);
			int temp = 0;
			for(int j=0;s[j]!='\0';j++){
				if(s[j]>='0' && s[j]<='9'){
					temp = temp*10 + s[j] - '0';
				}
				if(s[j] == ' ' || s[j+1] == '\0'){
					if(temp>i+1){
						vec.push_back(i+1);
						vec.push_back(temp);
					}
					temp = 0;
				}
			}
		}
		for(int i=0;i<vec.size();i+=2){
			cout<<vec[i]<<" "<<vec[i+1]<<"\n";
		}
//	}
	return 0;
}

