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

    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    ll res = 1;
    for (int i = 0; i < n; i++)
    {
        if (res < a[i])
        {
            cout << res;
            return 0;
        }
        res += a[i];
    }

    cout << res;

    return 0;
}

// 1 2 2 7 9
// res = 1
// 1+1 =2 +2 =4 +2 = 6 +

// 1 2 3 8
//  1 2 3 4 5 6
//  if res + a[i] < a[a+1] -> cannot generate