#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n, m, k;
int a[MAX];
int b[MAX];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    int i = 0, j = 0, cnt = 0;

    while (i < n && j < m)
    {
        int x = abs(a[i] - b[j]);
        if (x <= k)
        {
            ++cnt;
            ++i;
            ++j;
        }
        else if (a[i] > b[j])
            j++;
        else
            i++;
    }

    cout << cnt;

    return 0;
}