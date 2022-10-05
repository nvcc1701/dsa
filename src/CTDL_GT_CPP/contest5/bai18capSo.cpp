#include<bits/stdc++.h>
using namespace std;

//contest5/bai18capSo

struct cap{
	int x;
	int y;
};

bool compare(cap a,cap b){
	return a.y<b.y;
}

int capSo(cap arr[],int n){
	int l[n];
	for(int i=0;i<n;i++){
		l[i] = 1;
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(arr[i].x>arr[j].y && l[i]<l[j] + 1){
				l[i] = l[j] + 1;
			}
		}
	}
	return *max_element(l,l+n);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cap arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i].x>>arr[i].y;
		}
		sort(arr,arr+n,compare);
		cout<<capSo(arr,n)<<"\n";
	}
	return 0;
}

