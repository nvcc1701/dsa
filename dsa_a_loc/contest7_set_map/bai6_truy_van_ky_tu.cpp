#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

bool cmp1(pair<char, int> p1, pair<char, int> p2)
{
    if (p1.second == p2.second)
        return p1.first > p2.first;
    return p1.second < p2.second;
}

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
    for (int i = 0; i < s.size(); i++)
        mp[s[i]]++;

    vector<pair<char, int>> v;

    for (auto it : mp)
        v.push_back({it.first, it.second});
    sort(v.begin(), v.end(), cmp1);

    cout << v[v.size() - 1].first << " " << v[v.size() - 1].second << endl;
    cout << v[0].first << " " << v[0].second << endl;
    cout << v.size();

    return 0;
}