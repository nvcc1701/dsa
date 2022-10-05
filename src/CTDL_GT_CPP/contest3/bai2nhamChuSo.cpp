#include<bits/stdc++.h>
using namespace std;

// contest3/bai2nhamChuSo

int cong5(int num1,int num2){
	int count = 0;
	int t1=0,t2=0;
	while(num1){
		if(num1%10==5){
			count+=pow(10,t1);
		}
		t1++;
		num1/=10;
	}
	while(num2){
		if(num2%10==5){
			count+=pow(10,t2);
		}
		t2++;
		num2/=10;
	}
	return count;
}

int tru6(int num1,int num2){
	int count = 0;
	int t1=0,t2=0;
	while(num1){
		if(num1%10==6){
			count+=pow(10,t1);
		}
		t1++;
		num1/=10;
	}
	while(num2){
		if(num2%10==6){
			count+=pow(10,t2);
		}
		t2++;
		num2/=10;
	}
	return count;
}

int main(){
	int num1,num2;
	cin>>num1>>num2;
	int add5 = cong5(num1,num2);
	int sub6 = tru6(num1,num2);
	cout<<num1+num2-sub6<<" "<<num1+num2+add5;
	return 0;
}

