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

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, 1});
        v.push_back({y, -1});
    }

    sort(v.begin(), v.end());
    int cnt = v[0].second;
    int res = cnt;

    for (int i = 1; i < v.size(); i++)
    {
        cnt += v[i].second;
        res = max(res, cnt);
    }

    cout << res;

    return 0;
}