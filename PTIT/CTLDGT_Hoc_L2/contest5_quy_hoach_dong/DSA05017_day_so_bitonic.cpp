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
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int f1[n + 1];
    int f2[n + 1];
    memset(f1, 0, sizeof(f1));
    memset(f2, 0, sizeof(f2));

    for (int i = 1; i <= n; i++)
    {
        f1[i] = a[i];

        for (int j = 1; j < i; j++)
        {
            if (a[i] > a[j])
            {
                f1[i] = max(f1[j] + a[i], f1[i]);
            }
        }
    }

    for (int i = n; i >= 1; i--)
    {
        f2[i] = a[i];
        for (int j = n; j > i; j--)
        {
            if (a[i] > a[j])
            {
                f2[i] = max(f2[j] + a[i], f2[i]);
            }
        }
    }

    int res = 0;
    for (int i = n; i >= 1; i--)
    {
        res = max(res, (f1[i] + f2[i] - a[i]));
    }

    cout << res << endl;
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