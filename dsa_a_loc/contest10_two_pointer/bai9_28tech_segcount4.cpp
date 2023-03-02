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
    int a[n];
    for (int &x : a)
        cin >> x;
    multiset<int> se;

    int l = 0;
    ll count = 0;
    for (int r = 0; r < n; r++)
    {
        se.insert(a[r]);
        while (se.size() > 1 && (*se.rbegin() - *se.begin() > k))
        {
            auto it = se.find(a[l]);
            se.erase(it);
            l++;
        }
        count += r - l + 1;
    }

    cout << count;

    return 0;
}