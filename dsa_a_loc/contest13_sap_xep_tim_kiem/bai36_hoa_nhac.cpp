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

    int x, n, m;
    cin >> n;
    cin >> m;
    multiset<int> se;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        se.insert(x);
    }

    while (m--)
    {
        cin >> x;
        auto it = se.upper_bound(x);
        if (it == se.begin())
            cout << -1 << endl;
        else
        {
            it--;
            cout << *it << endl;
            se.erase(it);
        }
    }

    return 0;
}