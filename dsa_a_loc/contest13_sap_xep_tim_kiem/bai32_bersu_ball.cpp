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

    int n, m;
    cin >> n >> m;
    int a[n], b[m];

    for (auto &x : a)
        cin >> x;

    for (auto &x : b)
        cin >> x;

    sort(a, a + n);
    sort(b, b + m);

    int i = 0, j = 0, cnt = 0;
    while (i < n && j < m)
    {
        int x = abs(a[i] - b[j]);
        if (x <= 1)
        {
            i++;
            j++;
            cnt++;
        }
        else if (b[j] > a[i])
            i++;
        else
            j++;
    }

    cout << cnt;

    return 0;
}