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
    if (last != '0' && last != '2' && last != '4' && last != '6' && last != '8')
        return false;

    ll sum = 0;
    for (auto x : n)
        sum += (x - '0');

    if (sum % 3 != 0)
        return false;
    return true;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n;
    cin >> n;

    if (isDivisible(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}