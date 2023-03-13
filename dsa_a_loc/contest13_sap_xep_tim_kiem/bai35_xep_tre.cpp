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

    ll n, x;
    cin >> n >> x;
    ll a[n];
    for (auto &x : a)
        cin >> x;

    sort(a, a + n);

    int i = 0, j = n - 1, cnt = 0;
    while (i <= j)
    {
        ll tmp = a[i] + a[j];
        if (tmp <= x)
        {
            ++i;
            --j;
            ++cnt;
        }
        else
        {
            --j;
            ++cnt;
        }
    }
    cout << cnt;

    return 0;
}

//2 3 7 9