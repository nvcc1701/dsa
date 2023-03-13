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

    int n, k;
    cin >> n >> k;
    ll a[n];
    for (auto &x : a)
        cin >> x;

    int l = 0;
    ll res = 0;
    map<int, int> mp;
    for (int r = 0; r < n; r++)
    {
        mp[a[r]]++;
        while (mp.size() > k)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
                mp.erase(a[l]);
            l++;
        }
        res += (r - l + 1);
    }
    cout << res;

    return 0;
}