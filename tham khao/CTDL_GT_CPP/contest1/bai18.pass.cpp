#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--){
	int n;
	long long sum ;
	cin>>n>>sum;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int res =0;
	int soLuong = n-1;
	while(sum>0 && soLuong>=0){
		int soTo = sum/a[soLuong];
		res+=soTo;
		sum -= soTo*a[soLuong];
		soLuong--;
	}
	cout<<res;
	}
	return 0;
}

