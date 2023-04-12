#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n, k;

ll solve(ll n, ll k)
{
    ll m = pow(2, n) / 2;
    if (k == m)
        return n;

    if (k < m)
        return solve(n - 1, k);
    else
        return solve(n - 1, k - m);
}

void run_case()
{
    cin >> n >> k;
    cout << solve(n, k) << endl;
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