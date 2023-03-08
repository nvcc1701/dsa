#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define fi first
#define se second

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

    string s, t;
    getline(cin, s);
    getline(cin, t);

    map<string, int> mp;
    set<string> se;
    stringstream ss(s);
    while (ss >> s)
    {
        for (auto &x : s)
            x = tolower(x);
        se.insert(s);
    }

    for (auto x : se)
        mp[x]++;

    se.clear();
    ss.clear();
    ss.str(t);

    while (ss >> t)
    {
        for (auto &x : t)
            x = tolower(x);
        se.insert(t);
    }

    for (auto x : se)
        mp[x]++;

    for (auto x : mp)
    {
        if (x.second > 1)
            cout << x.first << " ";
    }

    return 0;
}