#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int a[200005];
int f[200005];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q, l, r;
    cin >> n >> k >> q;
    while (n--)
    {
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }

    for (int i = 1; i <= 20000; i++)
        a[i] = a[i - 1] + a[i];

    int dem = 0;
    for (int i = 1; i <= 20000; i++)
    {
        if (a[i] >= k)
            ++dem;
        f[i] = dem;
    }

    while (q--)
    {
        cin >> l >> r;
        cout << f[r] - f[l - 1] << endl;
    }

    return 0;
}