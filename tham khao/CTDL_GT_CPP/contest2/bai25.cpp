#include<bits/stdc++.h>
using namespace std;

// 2 tap con bang nhau quay lui'
int n;
int a[100];
int sum;
void init(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sum = 0;
}

bool checkTapConTongBangSum(int a[],int n,int s){
	if(s==0){
		return true;
	}
	if(n==0 && s!=0){
		return false;
	}
	if(a[n-1]>sum){
		return checkTapConTongBangSum(a,n-1,s);
	}
	return checkTapConTongBangSum(a,n-1,s-a[n-1]) || checkTapConTongBangSum(a,n-1,s);
//	s-=a[n-1];
//	checkTapConTongBangSum(a,n-1,s);
//	s+=a[n-1];
}

bool checkCo2TapConBangNhau(){
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	if(sum%2!=0){
		return false;
	}
	return checkTapConTongBangSum(a,n,sum/2);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		if(checkCo2TapConBangNhau()){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}

