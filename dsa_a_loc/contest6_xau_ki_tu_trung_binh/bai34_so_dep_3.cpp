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

    bool increase = false;
    bool decrease = false;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] > s[i - 1])
        {
            increase = true;
        }

        if (s[i] < s[i - 1])
        {
            decrease = true;
        }

        if (increase && decrease)
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}