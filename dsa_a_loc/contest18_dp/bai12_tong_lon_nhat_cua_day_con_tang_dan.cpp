#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n;

void run_case()
{
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    a[0] = 0;

    int f[n + 1];
    memset(f, 0, sizeof(f));

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
            {
                //  2 12 3 15
                // 0 2 14 5
                f[i] = max(f[i], f[j] + a[i]);
                // f[i] = f[j] + a[i]);

                res = max(res, f[i]);
            }
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