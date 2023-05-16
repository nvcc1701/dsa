#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 100000 + 5;

int n, a[MAX];

void run_case()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<ll> f(n + 1, 1);
    vector<ll> f2(n + 1, 1);

    for (int i = 2; i <= n; i++)
    {
        if (a[i] > a[i - 1])
            f[i] = f[i - 1] + 1;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        if (a[i] > a[i + 1])
            f2[i] = f2[i + 1] + 1;
    }

    ll res = 0;
    for (int i = 1; i <= n; i++)
    {
        res = max(res, f[i] + f2[i] - 1);
    }

    cout << res << endl;
}

int main()
{

#define LOCAL

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