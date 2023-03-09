#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll a, b, n;

bool check(ll m)
{
    ll x = (m / a) * (m / b);
    cout << m << " " << m / a << " " << m / b << endl;
    return x >= n;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> a >> b >> n;

    ll l = max(a, b), r = l * n, m;
    ll res = -1;

    while (l <= r)
    {
        m = (l + r) / 2;
        if (check(m))
        {
            res = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }

    cout << res;
    return 0;
}