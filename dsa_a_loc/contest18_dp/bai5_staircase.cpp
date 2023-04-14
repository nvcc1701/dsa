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

    // k = 2
    // f[0] = 1
    // o bac thu 1 co f[1] = f[0] +f[1]
    // o bac thu 2 co f[2] = f[2]+f[1]+f[0] = 2
    // o bac thu 3 co f[3] = f[3-1]+1 = 3 -> 1 1 1 | 1 2 | 3 | 2 1
    // o bac thu 4 co f[4] =

    int n, k;
    cin >> n >> k;

    int f[n + 1];
    memset(f, 0, sizeof(f));
    f[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i - j >= 0)
            {
                f[i] += f[i - j];
                f[i] %= MOD;
            }
        }
    }

    cout << f[n];
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