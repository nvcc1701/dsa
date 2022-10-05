#include<bits/stdc++.h>
using namespace std;

// contest4/bai39phanTuKhacNhau

int binary_Search(long long b[],int l,int r,long long x){
	if(r>=l){
		int mid = l + (r-l)/2;
		if(b[mid] == x){
			return mid;
		}
		if(b[mid]>x){
			return binary_Search(b,l,mid-1,x);
		}
		else{
			return binary_Search(b,mid+1,r,x);
		}
	}
	return -1;
}
int index(long long a[],long long b[],int n){
	int index = 0;
	for(int i=0;i<n;i++){
		if(binary_Search(b,0,n-2,a[i])==-1){
			index = i+1;
			break;
		}
	}
	return index;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
//		int m = n-1;
		long long a[n],b[n-1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			cin>>b[i];
		}
//		sort(a,a+n);
//		sort(b,b+m);
//		cout<<index(a,b,n)<<"\n";
		bool check = false;
		for(int i=0;i<n-1;i++){
			if(a[i]!=b[i]){
				check = true;
				cout<<i+1<<"\n";
				break;
			}
		}
		if(!check){
			cout<<n<<"\n";
		}
	}
	return 0;
}

