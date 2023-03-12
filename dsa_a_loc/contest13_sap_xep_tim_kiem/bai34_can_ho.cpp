#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n, m, k;
int a[MAX];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll x;
    multiset<ll> se;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        se.insert(x);
    }

    sort(a, a + n);

    int cnt = 0;
    for (int i = 0; (i < n) && (se.size() > 0); i++)
    {
        auto it = se.upper_bound(a[i] + k);
        it--;

        if ((a[i] - k) <= *it && *it <= (a[i] + k))
        {
            cnt++;
            se.erase(it);
        }
    }

    cout << cnt;

    return 0;
}