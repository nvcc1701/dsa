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
    vector<int> v;

    while (n--)
    {
        cin >> x;
        mp[x]++;
        v.push_back(x);
    }

    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
    cout << endl;

    for (auto x : v)
    {
        if (mp[x] != 0)
        {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }

    return 0;
}