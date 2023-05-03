#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    int n;
    cin >> n;
    int M[1000000];
    for (int i = 0; i < n; i++)
        cin >> M[i];
    ll res = 0;
    ll dp[1000000];
    dp[0] = M[0];
    dp[1] = max(M[1], M[0]);
    for (int i = 2; i < n; i++)
    {
        dp[i] = max(dp[i - 1], M[i] + dp[i - 2]);
        res = max(res, dp[i]);
    }
    cout << res << endl;
}

int main()
{

// #define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}