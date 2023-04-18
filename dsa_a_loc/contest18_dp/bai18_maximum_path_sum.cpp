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
    ll n, m;
    cin >> n >> m;
    ll a[n + 1][m + 1];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    ll f[n + 1][m + 1];
    memset(f, 0, sizeof(f));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 && j == 1)
                f[i][j] = a[1][1];
            else if (i == 1)
                f[i][j] = a[i][j] + f[i][j - 1];
            else if (j == 1)
                f[i][j] = a[i][j] + f[i - 1][j];
            else
                f[i][j] = a[i][j] + max({f[i - 1][j], f[i][j - 1], f[i - 1][j - 1]});
        }
    }

    cout << f[n][m];
}

int main()
{

#define LOCAL

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