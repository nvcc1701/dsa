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

    ll n;
    cin >> n;
    ll a[n];
    for (auto &x : a)
        cin >> x;

    ll sum = 0;
    ll cnt = 0;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        sum = (sum % n + n) % n;
        if (sum % n == 0)
            cnt++;
        if (mp.count(sum))
        {
            cnt += mp[sum];
        }

        mp[sum]++;
    }

    cout << cnt;

    return 0;
}