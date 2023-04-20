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
    int n;
    cin >> n;
    int a[n + 2];

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    a[0] = -INF;
    a[n + 1] = INF;

    int f[n + 2];
    memset(f, 0, sizeof(f));
    f[n + 1] = 1;

    for (int i = n; i >= 0; i--)
    {
        int jmax = n + 1;
        for (int j = i + 1; j <= n + 1; j++)
        {
            if (a[j] >= a[i] && f[j] >= f[jmax])
                jmax = j;
        }
        f[i] = f[jmax] + 1;
    }

    cout << n - (f[0] - 2) << endl;
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