#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll n, k;

void run_case()
{
    cin >> n >> k;
    ll a[n + 1], f[n + 1] = {0};

    multiset<ll> se;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = f[i - 1] + a[i];
        se.insert(f[i]);
    }

    if (k == 0)
    {
        if (se.count(0))
            cout << "YES\n";
        else
            cout << "NO\n";
        return;
    }

    se.insert(0);
    for (int i = 1; i <= n; i++)
    {
        if (se.count(f[i] - k))
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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