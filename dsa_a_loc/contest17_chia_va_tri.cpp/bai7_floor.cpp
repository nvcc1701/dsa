#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, x;
int a[MAX];

void run_case()
{
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    // binary search
    int l = 1, r = n, m;
    int res = -INF;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (a[m] <= x)
        {
            res = max(res, a[m]);
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }

    cout << res;
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