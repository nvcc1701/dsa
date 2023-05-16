#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n, k;
void run_case()
{
    cin >> n >> k;
    ll a[n + 1];
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    ll f[sum + 1];
    memset(f, 0, sizeof(f));
    f[0] = 1;

    ll res = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = sum; j >= 0; j--)
        {
            if (j - a[i] >= 0)
            {
                if (f[j - a[i]] != 0)
                {
                    f[j] = f[j - a[i]] + 1;
                    if (j % k == 0)
                        res = max(res, f[j]);
                }
            }
        }
    }

    cout << res - 1 << "\n";
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