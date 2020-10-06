#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int dp[105], res;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; string s; cin >> n >> s;
        res = 0; memset(dp, 0, sizeof(dp));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < i; j++) 
                if(s[i] == s[j]) dp[i] = max(dp[i],dp[j] + 1);
            res = max(res, dp[i]);
        }
        cout << res << "\n";
    }
}