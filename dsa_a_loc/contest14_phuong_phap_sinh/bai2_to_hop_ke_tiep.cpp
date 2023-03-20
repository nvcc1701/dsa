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

    int n, k;
    cin >> n >> k;
    int a[MAX];
    for (int i = 1; i <= k; i++)
        cin >> a[i];

    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }

    if (i == 0)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << i << " ";
        }
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
        for (int i = 1; i <= k; i++)
        {
            cout << a[i] << " ";
        }
    }

    return 0;
}