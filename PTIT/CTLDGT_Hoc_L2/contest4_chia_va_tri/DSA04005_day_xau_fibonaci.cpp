#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n, k;
ll f[100];

void init()
{
    f[1] = f[2] = 1;
    for (int i = 3; i <= 100; i++)
        f[i] = f[i - 1] + f[i - 2];
}

char fibo(ll n, ll k)
{
    if (n == 1)
        return 'A';
    if (n == 2)
        return 'B';

    if (k <= f[n - 2])
        return fibo(n - 2, k);
    else
        return fibo(n - 1, k - f[n - 2]);
}

void run_case()
{
    cin >> n >> k;
    cout << fibo(n, k) << endl;
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
    init();
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}