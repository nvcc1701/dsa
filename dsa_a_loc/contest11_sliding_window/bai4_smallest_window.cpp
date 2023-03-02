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
    set<char> se;

    for (auto x : s)
        se.insert(x);

    map<char, int> mp;
    int l = 0;
    int res = INF;
    for (int r = 0; r < s.size(); r++)
    {
        mp[s[r]]++;
        while (mp.size() == se.size())
        {
            res = min(res, r - l + 1);
            mp[s[l]]--;
            if (mp[s[l]] == 0)
                mp.erase(s[l]);
            l++;
        }
    }

    cout << res;

    return 0;
}