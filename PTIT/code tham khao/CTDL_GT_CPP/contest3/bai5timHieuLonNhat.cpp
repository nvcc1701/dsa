#include<bits/stdc++.h>
using namespace std;

// contest3/bai5/chiaMang

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,greater<int>()); // sap xep mang giam dan;
		long long sumArr1 = 0; // mang co tong lon hon
		long long sumArr2 = 0; // mang co tong nho hon
		if(k<n-k){
			for(int i=0;i<n-k;i++){
				sumArr1 += a[i];
			}
			for(int i=n-k;i<n;i++){
				sumArr2 += a[i];
			}
			cout<<sumArr1 - sumArr2<<"\n";
		}
		else{
			for(int i=0;i<k;i++){
				sumArr1 += a[i];
			}
			for(int i=k;i<n;i++){
				sumArr2 += a[i];
			}
			cout<<sumArr1 - sumArr2<<"\n";
		}
	}
	return 0;
}

