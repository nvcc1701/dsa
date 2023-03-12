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

    ll n, x;
    cin >> n >> x;
    ll a[n];

    ll tmp;
    multiset<ll> se;
    multiset<ll> se2;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        se.insert(tmp);
        se2.insert(tmp);
    }

    int cnt = 0;
    for (auto it = se.begin(); it != se.end() && se2.count(*it); it++)
    {
        auto it2 = se.lower_bound(x - *it);
        it2--;
        if (it2 != se.end() && se2.count(*it2))
        {
            se2.erase(*it);
            se2.erase(*it2);
        }
        cnt++;
    }

    cout << cnt;

    return 0;
}