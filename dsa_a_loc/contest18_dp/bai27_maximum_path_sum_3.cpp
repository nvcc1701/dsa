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
    int a[n + 1][n + 1];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    int f[n + 1][n + 1];
    memset(f, 0, sizeof(f));

    for (int i = 1; i <= n; i++)
        f[i][1] = a[i][1];

    for (int j = 2; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
            {
                f[i][j] = a[i][j] + max(f[i][j - 1], f[i + 1][j - 1]);
            }
            else if (i == n)
            {
                f[i][j] = a[i][j] + max(f[i][j - 1], f[i - 1][j - 1]);
            }
            else
            {
                f[i][j] = a[i][j] + max({f[i][j - 1], f[i - 1][j - 1], f[i + 1][j - 1]});
            }
        }
    }

    int ans = -INF;
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, f[i][n]);
    }

    cout << ans;
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
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}