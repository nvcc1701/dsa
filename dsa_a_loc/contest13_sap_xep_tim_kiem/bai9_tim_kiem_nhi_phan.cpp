#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;
int a[MAX];
bool binarySearch(int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
            return true;
        else if (a[m] > x)
            l = m + 1;
        else
            r = m - 1;
    }
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

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int x, q;
    cin >> q;
    while (q--)
    {
        cin >> x;
        if (binarySearch(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}