#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;

ll pnk(ll n, ll k)
{
    if (k > n)
        return 0;

    ll res = 1;
    for (int i = 0; i < k; i++)
    {
        res *= (n - i);
        res %= MOD;
    }

    return res;
}

void run_case()
{
    cin >> n >> k;

    cout << pnk(n, k) << endl;
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