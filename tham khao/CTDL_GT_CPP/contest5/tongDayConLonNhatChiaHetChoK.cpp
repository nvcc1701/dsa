#include <bits/stdc++.h> 
using namespace std; 
  
int dp[1001][1001]; 
  
// Function to return the maximum sum 
// divisible by k from elements of v 
int find_max(int i, int sum, int n, int arr[],int k) 
{ 
  
    if (i == n) 
        return 0; 
  
    if (dp[i][sum] != -1) 
        return dp[i][sum]; 
  
    int ans = 0; 
    // check if sum of elements excluding the 
    // current one is divisible by k 
    if ((sum + find_max(i + 1, sum, n,arr, k)) % k == 0) 
        ans = find_max(i + 1, sum, n,arr, k); 
      
    // check if sum of elements including the 
    // current one is divisible by k 
    if((sum + arr[i] + find_max(i + 1,(sum + arr[i]) % k, 
                                   n,arr, k)) % k == 0) 
        // Store the maximum 
        ans = max(ans, arr[i] + find_max(i + 1, 
                            (sum + arr[i]) % k,n,arr, k)); 
      
	cout<<"sum = "<<sum<<"i = "<<i<<"ans = "<<ans<<"\n";
    return dp[i][sum] = ans; 
} 
  
// Driver code 
int main() 
{ 
	int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
    memset(dp, -1, sizeof(dp)); 
    cout << find_max(0, 0, n ,arr, k); 
    for(int i=0;i<n;i++){
    	for(int j=0;j<=19;j++){
    		cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}
}
