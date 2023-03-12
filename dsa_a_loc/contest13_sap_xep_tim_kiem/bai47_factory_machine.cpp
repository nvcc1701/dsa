#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, t;
int a[MAX];

bool check(ll m)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += m / a[i];
        if (sum >= t)
            return true;
    }

    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> t;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll l = 0, r = 1ll * t * (*min_element(a, a + n));
    ll res = -1;
    while (l <= r)
    {
        ll m = (l + r) / 2;
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