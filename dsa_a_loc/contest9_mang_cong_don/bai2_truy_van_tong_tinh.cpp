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

    int n, q, l, r, x;
    cin >> n >> q;

    int a[n + 1];
    ll f[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
    }

    while (q--)
    {
        cin >> l >> r;
        cout << f[r + 1] - f[l] << endl;
        cout << f[r + 1] << " " << f[l] << endl;
    }

    return 0;
}