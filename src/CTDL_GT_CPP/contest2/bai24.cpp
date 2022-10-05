#include<bits/stdc++.h>
using namespace std;

// Day con co tong bang K

int n;
int a[11],x[11];
int k;
bool check;

void init(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	check = false;
}

void display(){
	cout<<"[";
	for(int i=0;i<n;i++){
		if(x[i]==1){
			cout<<a[i]<<" ";
		}
	}
	cout<<"] ";
}

bool checkSum(){
	int sum = 0;
	for(int i=0;i<n;i++){
		sum+=x[i]*a[i];
	}
	if(sum==k) return true;
	return false;
}

void Try(int i){
	for(int j=1;j>=0;j--){
		x[i]=j;
		if(i==n-1){
			if(checkSum()){
				display();
				check = true;
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
		Try(0);
		if(!check){
			cout<<"-1";
		}
		cout<<"\n";
	}
	return 0;
}

