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

    ll n, m, x;
    cin >> n >> m;

    ll a[n + 1] = {0};
    map<ll, ll> mp;
    ll cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        a[i] = a[i - 1] + x;
        mp[a[i]]++;
        cnt += mp[a[i - 1] + m];
    }

    // for (int i = 0; i <= n; i++)
    // {
    //     cout << mp[a[i] + m] << " " << a[i] + m << endl;
    // }

    cout << cnt;

    return 0;
}