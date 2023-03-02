#include<bits/stdc++.h>
using namespace std;

// contest6/bai13kLagestElement2

int kLagestElement2(int arr[],int n,int x){
	int count = 0;
	for(int i=0;i<n;i++){
		if(arr[i] == x){
			int j = i;
			while(arr[j]==x && j<n){
				count++;
				j++;
			}
			break;
		}
	}
	return count;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int *arr = new int[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int res = kLagestElement2(arr,n,x);
		if(res == 0){
			cout<<-1<<"\n";
		}
		else{
			cout<<res<<"\n";
		}
	}
	return 0;
}

