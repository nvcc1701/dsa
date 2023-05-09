#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 500 + 5;

int n, m;
int a[MAX][MAX];
int dp[MAX][MAX];

void run_case()
{
    cin >> n >> m;
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
                dp[i][j] = dp[i][j - 1] + 1;
            else
                dp[i][j] = 0;
        }
    }

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j])
            {
                int x = dp[i][j];
                for (int k = i + 1; k <= n; k++)
                {
                    x = min(x, dp[k][j]);
                    res = max(res, x * (k - i + 1));
                }
            }
        }
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