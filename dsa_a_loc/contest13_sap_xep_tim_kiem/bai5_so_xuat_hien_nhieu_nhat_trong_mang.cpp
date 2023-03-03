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

    int n, x;
    cin >> n;
    map<int, int> mp;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }

    for (auto x : mp)
        v.push_back(x);

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second)
            return a > b;
        return a.second < b.second;
    });

    cout << v.rbegin()->first << " " << v.rbegin()->second;
    return 0;
}