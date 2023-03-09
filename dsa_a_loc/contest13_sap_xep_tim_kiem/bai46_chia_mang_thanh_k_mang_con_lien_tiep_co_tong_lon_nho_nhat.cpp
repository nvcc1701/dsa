#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[MAX];

bool check(ll m)
{
    int cnt = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > m)
        {
            cnt++;
            sum = a[i];
        }
    }
    cnt++;
    if (cnt <= k)
        return true;
    else
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

    cin >> n >> k;
    ll l = -INF, r = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        l = max(l, 1ll * a[i]);
        r += a[i];
    }

    ll res = 0;
    while (l <= r)
    {
        ll m = l + (r - l) / 2;
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