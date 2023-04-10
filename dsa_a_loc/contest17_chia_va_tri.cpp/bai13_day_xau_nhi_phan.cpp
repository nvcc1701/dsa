#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n, k;
ll f[93];

void init()
{
    f[1] = f[2] = 1;
    for (int i = 3; i <= 92; i++)
        f[i] = f[i - 1] + f[i - 2];
}

// 01
//


char fibo(ll n, ll k)
{
    if (n == 1)
        return '0';
    if (n == 2)
        return '1';

    if (k > f[n - 2])
    {
        return fibo(n - 1, k - f[n - 2]);
    }
    else
    {
        return fibo(n - 2, k);
    }
}

void run_case()
{
    cin >> n >> k;
    init();
    cout << fibo(n, k);
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