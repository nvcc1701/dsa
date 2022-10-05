#include<bits/stdc++.h>
using namespace std;

int arr[6];
int x[5];
bool res;

void init(){
	for(int i=1;i<=5;i++){
		cin>>arr[i];
	}
	sort(arr+1,arr+5+1);
	res = false;
}

bool checkSum(){
	int s = arr[1];
	for(int t=1;t<=4;t++){
		if(x[t]==1){
			s+=arr[t+1];
		}
		else if(x[t]==2){
			s-=arr[t+1];
		}
		else if(x[t]==3){
			s*=arr[t+1];
		}
	}
	if(s==23){
		return true;
	}
	return false;
}

void Try(int i){
	for(int j=1;j<=3;j++){
		x[i] = j;
		if(i==4){
			if(checkSum()){
				cout<<"YES\n";
				res = true;
				return;
			}
		}
		else Try(i+1);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		do{
			Try(1);
		}while(next_permutation(arr+1,arr+5+1) && !res);
		if(!res){
			cout<<"NO\n";
		}
	}
	return 0;
}
