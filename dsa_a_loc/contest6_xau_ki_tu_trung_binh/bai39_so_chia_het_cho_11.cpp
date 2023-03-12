#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

bool isDivisible(string s)
{
    int n = s.size();
    ll le = 0, chan = 0;
    // le
    for (int i = 0; i < n; i += 2)
        le += (s[i] - '0');

    // chan
    for (int i = 1; i < n; i += 2)
        chan += (s[i] - '0');

    if (abs(chan - le) % 11 == 0)
        return true;
    return false;
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

    if (isDivisible(s))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}