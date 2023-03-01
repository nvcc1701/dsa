#include<bits/stdc++.h>
using namespace std;

// contest6/bai2sorting2

struct point{
	int a;
	int b;
};

bool compare(point x,point y){
	return x.b < y.b;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		point arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i].a;
			arr[i].b  = abs(x - arr[i].a);
		}
//		sort(arr,arr+n,compare);
		for(int i=0;i<n;i++){
			for(int j=0;j<n-i-1;j++){
				if(arr[j].b > arr[j+1].b){
					swap(arr[j],arr[j+1]);
				}
			}
		}
		for(int i=0;i<n;i++){
			cout<<arr[i].a<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

