#include<bits/stdc++.h>
using namespace std;

// contest3/bai8sapXepCongViec1

struct action{
	int start;
	int finish;
//	int index;
};

void init(action arr[],int &n){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i].start;
//		arr[i].index = i+1;
	}
	for(int i=0;i<n;i++){
		cin>>arr[i].finish;
	}
}

bool compare(action a,action b){
	return (a.finish < b.finish);
}

int solution(action arr[],int n){
	sort(arr,arr+n,compare);
	int res = 0 ;
	if(arr[0].start<=arr[1].finish){
		res++;
	}
	else{
		return res;
	}
	int i=0;
	for(int j=1;j<n;j++){
		if(arr[j].start>=arr[i].finish){
			res++;
			i = j;
		}
	}
	return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		action arr[1001];
		init(arr,n);
		cout<<solution(arr,n)<<"\n";
	}
	return 0;
}

