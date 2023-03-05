#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[MAX];
ll res = 0;

void binarySearch(int i, int k)
{
    int l = i + 1, r = n - 1;
    int m;
    ll cnt = -1;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (a[m] < k)
        {
            l = m + 1;
            cnt = m;
        }
        else
        {
            r = m - 1;
        }
    }

    cout << m << " " << i << endl;

    if (cnt != -1)
        res += (m - i);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        binarySearch(i, k - a[i]);
    }

    cout << res;

    return 0;
}