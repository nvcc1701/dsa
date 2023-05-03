#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

vector<ll> X;
ll dem(ll k, ll n, ll pos)
{
    if (k % 2 == 1)
        return 1;
    if (k < X[pos])
        return dem(k, n / 2, pos - 1);
    else if (k == X[pos])
    {
        return n % 2;
    }
    else if (k > X[pos])
        return dem(2 * X[pos] - k, n / 2, pos - 1);
}

void run_case()
{
    ll n, l, r;
    cin >> n >> l >> r;
    X.clear();
    ll x = 1;
    ll y = n;
    while (n / 2 > 0)
    {
        x *= 2;
        X.push_back(x);
        n /= 2;
    }
    ll res = 0;
    for (ll i = l; i <= r; i++)
    {
        res += dem(i, y, X.size() - 1);
    }
    cout << res << endl;
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
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}