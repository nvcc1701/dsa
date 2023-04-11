#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int count(ll k, ll n)
{
    if (n < 2)
        return n;

    int x = log2(n) + 1;
    int m = pow(2, x) - 1;

    if (k == m / 2 + 1)
        return n % 2;

    if (k > m)
        return 0;

    if (k <= m / 2)
        return count(k, n / 2);
    else
        return count(k - (m / 2 + 1), n / 2);
}

void run_case()
{
    ll n, l, r;
    cin >> n >> l >> r;
    int ans = 0;
    if (l > r)
        swap(l, r);

    for (ll i = l; i <= r; i++)
        ans += count(i, n);
    cout << ans << endl;
}

int main()
{

// #define LOCAL

#ifdef LOCAL
    freopen("../input.txt ", "r", stdin);
    freopen("../output.txt ", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Test = 1;
    // cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}