#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int m, n;

ll ckn(int n, int k)
{
    ll dp[n + 1][k + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (i == j || j == 0)
                dp[i][j] = 1;
            else
            {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }
        }
    }

    return dp[n][k];
}

void run_case()
{
    cin >> m >> n;
    cout << ckn(m + n, m) << endl;

    // long long dp[101][101];
    // for (int i = 0; i <= m; i++)
    //     for (int j = 0; j <= n; j++)
    //         dp[i][j] = 1;

    // for (int i = 1; i <= m; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //         dp[i][j] += dp[i - 1][j] + dp[i][j - 1];
    // }

    // cout << (dp[m][n] + 1) / 2 << endl;
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