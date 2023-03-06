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
    getline(cin, s);
    stringstream ss(s);
    map<string, int> mp;
    while (ss >> s)
        mp[s]++;

    vector<pair<string, int>> v;
    for (auto x : mp)
        v.push_back(x);

    sort(v.begin(), v.end(), [](pair<string, int> a, pair<string, int> b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second < b.second;
    });
    cout << v.rbegin()->first << " " << v.rbegin()->second << endl;
    
    sort(v.begin(), v.end(), [](pair<string, int> a, pair<string, int> b) {
        if (a.second == b.second)
            return a.first > b.first;
        return a.second < b.second;
    });
    cout << v.begin()->first << " " << v.begin()->second << endl;

    return 0;
}