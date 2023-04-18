#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
// const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1001;

char a[MAX][MAX];
ll f[MAX][MAX];

void run_case()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    if (a[1][1] == '*' || a[n][n] == '*')
    {
        cout << 0;
        return;
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 && j == 1)
                f[i][j] = 1;
            else if (a[i][j] == '*')
                f[i][j] = 0;
            else
                f[i][j] = f[i][j - 1] + f[i - 1][j];
            f[i][j] %= MOD;
        }

    cout << f[n][n];
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