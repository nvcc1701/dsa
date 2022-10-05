#include<bits/stdc++.h>
using namespace std;

// bai 17 sinh

int n;
int x[19];

void init(){
	cin>>n;
	for(int i=0;i<19;i++){
		x[i] = 0;
	}
}

void genNext(){
	int i=18;
	while(i>=0 && x[i]==9){
		x[i] = 0;
		i--;
	}
	x[i] = 9;
}

long long xThanhTong(){
	long long sum = 0;
	for(int i=0;i<19;i++){
		sum = sum*10 + x[i];
	}
	return sum;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		init();
		while(1){
			genNext();
			long long res = xThanhTong();
			if(res%n==0){
				cout<<res<<"\n";
				break;
			}
		}
	}
	return 0;
}

