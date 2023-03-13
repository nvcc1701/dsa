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

    ll n, m;
    cin >> n >> m;

    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll cnt = 0;
    ll sum = 0;
    map<ll, ll> mp;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == m)
            cnt++;
        if (mp.count(sum - m))
        {
            cout << sum - m << " " << mp[sum - m] << endl;
            cnt += mp[sum - m];
        }
        mp[sum]++;
    }

    cout << cnt;
    return 0;
}