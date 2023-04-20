#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    int c, n;
    cin >> c >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int f[c + 1];
    memset(f, 0, sizeof(f));

    for (int i = 1; i <= n; i++)
    {
        for (int j = c; j >= 1; j--)
        {
            if (j - a[i] >= 0)
                f[j] = max(f[j], f[j - a[i]] + a[i]);
        }
    }

    cout << f[c];
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