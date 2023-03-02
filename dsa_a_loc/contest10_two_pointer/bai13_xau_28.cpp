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
    cin.ignore();
    int x, y;
    cin >> x >> y;
    map<char, int> mp;

    int r = 0, l = 0;
    ll res = -1;

    for (r = 0; r < s.size(); r++)
    {
        mp[s[r]]++;
        while (mp['2'] > x || mp['8'] > y)
        {
            mp[s[l]]--;
            if (mp[s[l]] == 0)
                mp.erase(s[l]);
            l++;
        }

        res = max(res, (ll)(r - l + 1));
    }

    cout << res;

    return 0;
}