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
    int n, s;
    cin >> n >> s;

    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int f[s + 1];
    memset(f, 0, sizeof(f));

    f[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            if (j >= a[i])
            {
                f[j] += f[j - a[i]];
            }
            else
                f[j] = f[j];

            f[j] %= MOD;
        }
    }

    cout << f[s];
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