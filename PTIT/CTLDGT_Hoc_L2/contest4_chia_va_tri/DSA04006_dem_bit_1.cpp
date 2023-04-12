#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n, l, r;

int search(ll n, ll k)
{
    ll x = log2(n) + 1;
    ll m = pow(2, x) / 2;

    if (k == m)
        return n % 2;

    if (k < m)
        return search(n / 2, k);
    else if (k > m)
        return search(n / 2, k - m);
}

void run_case()
{
    cin >> n >> l >> r;

    ll cnt = 0;
    for (ll i = l; i <= r; i++)
    {
        cnt += search(n, i);
    }

    cout << cnt << endl;
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