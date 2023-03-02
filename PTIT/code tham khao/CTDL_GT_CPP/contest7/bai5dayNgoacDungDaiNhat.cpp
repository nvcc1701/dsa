#include<bits/stdc++.h>
using namespace std;

// contest7/bai5dayNgoacDungDaiNhat

int dayNgoacDungDaiNhat(string str){
	stack<int> myS;
	myS.push(-1);
	int maxL = 0;
	int n = str.length();
	for(int i=0;i<n;i++){
		if(str[i] == '('){
			myS.push(i);
		}
		else{
			myS.pop();
			if(!myS.empty()){
				maxL = max(maxL,i-myS.top());
			}
			else{
				myS.push(i);
			}
		}
	}
	return maxL;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		cout<<dayNgoacDungDaiNhat(str)<<"\n";
	}
	return 0;
}

