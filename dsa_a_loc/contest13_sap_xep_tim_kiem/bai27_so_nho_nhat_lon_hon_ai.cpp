#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n;
ll a[MAX];
ll b[MAX];

map<int, string> mp;

void binarySearch(int i, int x)
{
    int l = i + 1, r = n - 1;
    int m;
    int res = -1;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (a[m] > x)
        {
            res = a[m];
            r = m - 1;
        }
        else if (a[m] <= x)
        {
            l = m + 1;
        }
    }

    if (res == -1)
        mp[x] = "_";
    else
        mp[x] = to_string(res);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(a, a + n);
    for (int i = 0; i < n; i++)
        binarySearch(i, a[i]);

    for (int i = 0; i < n; i++)
    {
        cout << mp[b[i]] << " ";
    }
    return 0;
}