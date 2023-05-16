#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e2 + 5;

ll ckn(int n, int k)
{
    ll f[n + 1][k + 1] = {0};
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (i == j || j == 0)
                f[i][j] = 1;
            else
            {
                f[i][j] = f[i - 1][j - 1] + f[i - 1][j];
                f[i][j] %= MOD;
            }
        }
    }

    return f[n][k] % MOD;
}

ll f[MAX];
void init()
{
    f[1] = 10;
    for (int i = 2; i <= MAX; i++)
    {
        f[i] = f[i - 1] + ckn(8 + i, i);
        f[i] %= MOD;
    }
}

void run_case()
{
    int n;
    cin >> n;
    cout << f[n] << endl;
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
    init();
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}