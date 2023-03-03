#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;
int a[MAX];
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

    ll sum = a[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        if (i < n - k - 1)
        {
            sum -= a[i];
        }
        else
            sum += a[i];
    }

    cout << sum;
    return 0;
}

// 3 dau +, 2 dau -;