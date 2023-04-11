#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n, k;

ll bipow(ll a, ll b)
{
    if (b == 0)
        return 1;

    ll x = bipow(a, b / 2);
    x %= MOD;

    if (b % 2)
        return ((x % MOD * x % MOD) % MOD * a % MOD) % MOD;
    else
        return (x % MOD * x % MOD) % MOD;
}

void run_case()
{
    cin >> n >> k;

    cout << bipow(n, k) << endl;
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