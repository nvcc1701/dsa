#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;

    ll l = 0, res = 0;
    map<ll, ll> mp;

    for (ll r = 0; r < n; r++)
    {
        mp[a[r]]++;
        while (mp[a[r]] > 1)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
                mp.erase(mp[a[l]]);
            l++;
        }
        res = max(res, (r - l + 1));
    }

    cout << res;

    return 0;
}