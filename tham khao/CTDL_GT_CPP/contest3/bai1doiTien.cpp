#include<bits/stdc++.h>
using namespace std;

// contest3/bai1doiTien

int arr[10] = {1,2,5,10,20,50,100,200,500,1000};

int soTo(int n){
	int soTo = 0;
	int temp;
	for(int i=9;i>=0;i--){
		temp = n/arr[i];
		soTo += temp;;
		n -= temp*arr[i];
	}
	return soTo;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<soTo(n)<<"\n";
	}
	return 0;
}

