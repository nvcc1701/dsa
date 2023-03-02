#include<bits/stdc++.h>
using namespace std;

// 2 tap con co tong bang nhau quy hoach dong(Dynamic Programming)

void init(int &n,int a[]){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}

bool check2TapConCoTongBangNhau(int n,int a[]){
	int sum = 0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	if(sum%2==1){
		return false;
	}
	bool dp[sum/2+1][n+1];
	for(int i=0;i<=n;i++){
		dp[0][i] = true;
	}
	for(int i=1;i<=sum/2;i++){
		dp[i][0] = false;
	}
	// d[i][j] = true neu tong cac so tu a[0] den a[j-1] bang sum, false neu !=;
	for(int i=1;i<=sum/2;i++){
		for(int j=1;j<=n;j++){
			dp[i][j] = dp[i][j-1];
			if(i>=a[j-1]){
				dp[i][j] = dp[i][j] || dp[i-a[j-1]][j-1];
			}
		}
	}
	return dp[sum/2][n];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int a[101];
		init(n,a);
		if(check2TapConCoTongBangNhau(n,a)){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}

