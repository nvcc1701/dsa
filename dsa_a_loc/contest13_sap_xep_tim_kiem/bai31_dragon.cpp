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

    ll n, s, x;
    cin >> n >> s;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back({x, 0});
    }

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[i].second = x;
    }

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) { return a.first < b.first; });

    for (int i = 0; i < n; i++)
    {
        if (s > v[i].first)
        {
            s += v[i].second;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}