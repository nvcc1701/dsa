#include<bits/stdc++.h>
using namespace std;

// contest6/bai10sorting10

void sorting10(long long arr[],int n){
	vector<int> res;
	res.clear();
	for(int i=0;i<n;i++){
		while(arr[i]){
			res.push_back(arr[i]%10);
			arr[i]/=10;
		}
	}
	sort(res.begin(),res.end());
	res.erase(unique(res.begin(),res.end()),res.end());
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long *arr = new long long[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sorting10(arr,n);
	}
	return 0;
}

