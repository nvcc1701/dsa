#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e4 + 5;

ll n, k;
ll a[MAX];
ll cnt;

ll binary_search(ll l, ll r, ll x)
{
    ll m;
    ll Max = 0;
    ll start = l;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (a[m] < x)
        {
            Max = max(Max, m);
            l = m + 1;
        }
        else
            r = m - 1;
    }

    return Max;
}

void run_case()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    ll cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cnt += lower_bound(a + i, a + n, k + a[i]) - a - i - 1;
    }

    cout << cnt << endl;
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