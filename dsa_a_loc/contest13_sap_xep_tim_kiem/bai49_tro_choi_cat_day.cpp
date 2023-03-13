#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
ll a[MAX];

bool check(double m)
{
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += (ll)(a[i] / (m));
        if (cnt >= k)
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

    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    double l = 0, r = *max_element(a, a + n);
    double m;
    double res = -1;
    for (int i = 0; i < 100; i++)
    {
        m = (l + r) / 2.0;
        if (check(m))
        {
            res = m;
            l = m;
        }
        else
            r = m;
    }

    cout << fixed << setprecision(6) << res;
    return 0;
}