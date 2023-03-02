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

    int n;
    cin >> n;
    int a[n];
    int d[n];

    for (int &x : a)
        cin >> x;

    d[0] = a[0];
    for (int i = 1; i < n; i++)
        d[i] = a[i] - a[i - 1];

    for (auto x : d)
        cout << x << " ";

    return 0;
}