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
    string t;
    cin.ignore(0);
    cin >> t;
    map<char, int> mp;
    for (auto x : t)
        mp[x]++;
    map<char, int> mp2;

    pair<int, int> res = {9999, 9999};
    for (int r = 0; r < s.size(); r++)
    {
        mp[s[r]]--;
        if (mp[s[r]] == 0)
            mp.erase(s[r]);
        while (mp.size() == 0)
        {
            
        }
    }

    return 0;
}