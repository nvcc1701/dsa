#include<bits/stdc++.h>
using namespace std;

//contest1/bai18mayATMthamLam
int n;
long arr[31];
long sum;
int res;
bool check;

void init(){
	cin>>n>>sum;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	res = n;
	check = false;
}

void mayATM(int n, int sum, int soTo){
	if(sum==0 && soTo<=res){
		res = soTo;
		check = true;
		return;
	}
	if(n<0){
		return;
	}
	for(n-1;n>=0;n--){
		if(sum-arr[n]>=0){
			sum-=arr[n];
			soTo++;
			mayATM(n-1,sum,soTo);
			sum+=arr[n];
			soTo--;
		}
	}
}

int main(){
	init();
	mayATM(n,sum,0);
	if(!check){
		cout<<-1;
	}
	else{
		cout<<res;
	}
	return 0;
}

