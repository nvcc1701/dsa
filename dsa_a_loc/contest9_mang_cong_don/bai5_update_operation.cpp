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

    int n, q, l, r, k;
    cin >> n >> q;
    int a[n];
    int d[n];
    for (int &x : a)
        cin >> x;
    for (int i = 0; i < n; i++)
        if (i == 0)
            d[i] = a[i];
        else
            d[i] = a[i] - a[i - 1];

    while (q--)
    {
        cin >> l >> r >> k;
        d[l] += k;
        d[r + 1] -= k;
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            a[i] = d[i];
        else
            a[i] = d[i] + a[i - 1];

        cout << a[i] << " ";
    }

    return 0;
}