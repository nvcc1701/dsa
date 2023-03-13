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

    int x, n;
    cin >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back({x, i});
    }

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) { return a.first < b.first; });

    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i].second < v[i - 1].second)
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}