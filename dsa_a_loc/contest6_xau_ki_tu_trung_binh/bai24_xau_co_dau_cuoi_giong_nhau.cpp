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

    string s;
    cin >> s;
    map<char, int> mp;
    for (auto x : s)
        mp[x]++;

    ll res = s.size();
    for (auto x : mp)
    {
        ll mul = x.second * (x.second - 1) / 2;
        res += mul;
    }

    cout << res;
    return 0;
}