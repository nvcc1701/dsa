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
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back({i+1, x});
    }

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        int an = a.first;
        int bn = b.first;

        if (bn % 2 == 0)
            return true;
        else if (bn % 2 == 1)
            return false;
    });

    for (auto x : v)
        cout << x.second << " ";

    return 0;
}