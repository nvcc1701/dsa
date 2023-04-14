#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n, s;
void run_case()
{
    cin >> n >> s;
    ll c[n];
    for (int i = 0; i < n; i++)
        cin >> c[i];

    ll f[s + 1];
    f[0] = 0;

    for (ll i = 1; i <= s; i++)
    {
        f[i] = INF;
        for (int j = 0; j < n; j++)
        {
            ll x = c[j];
            if (x <= i)
                f[i] = min(f[i], f[i - x] + 1);
        }
    }

    if (f[s] == INF)
        cout << -1;
    else
        cout << f[s] << endl;
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