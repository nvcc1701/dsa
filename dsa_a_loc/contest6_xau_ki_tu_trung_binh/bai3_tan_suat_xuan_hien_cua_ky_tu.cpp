#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    map<char, int> mp;
    vector<pair<char, int>> v;
    vector<char> v2;

    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
        v2.push_back(s[i]);
    }

    for (auto x : mp)
    {
        v.push_back(x);
    }

    sort(v.begin(), v.end(), [](pair<char, int> a, pair<char, int> b) { return a.first < b.first; });

    for (auto x : v)
        cout << x.first << " " << x.second << endl;
    cout << endl;

    for (auto x : v2)
    {
        if (mp[x] != 0)
        {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }

    return 0;
}