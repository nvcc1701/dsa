#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

bool isDivisible(string n)
{
    char last = n[n.size() - 1];
    if (last != '5' && last != '0')
        return false;
   
    ll num = 0;
    for (auto x : n)
    {
        num = num + (x - '0');
    }

    if (num % 3 == 0)
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