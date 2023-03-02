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
    int a[256] = {0};
    int res = 0;
    int l = 0;

    for (int r = 0; r < s.size(); ++r)
    {
        ++a[s[r]];
        while (a[s[r]] > 1)
        {
            --a[s[l]];
            ++l;
        }
        res = max(res, r - l + 1);
    }

    cout << res;

    return 0;
}