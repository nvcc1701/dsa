#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int INF = 1e9 + 5;
const int MAX = 1e6 + 5;

int n;
int w[MAX], v[MAX], w1;
ll f[101][MAX]; // o vat thu i suc chua la j thi max la

void run_case()
{
    cin >> n >> w1;
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        w[i] = x;
        v[i] = y;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= w1; j++)
        {
            if (j - w[i] >= 0)
                f[i][j] = max(f[i - 1][j - w[i]] + v[i], f[i - 1][j]);
            else
                f[i][j] = f[i - 1][j];
        }
    }

    cout << f[n][w1];
}

int main()
{
#define LOCAL

#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Test = 1;
    // cin >> Test;
    for (int test = 0; test < Test; test++)
    {
        run_case();
    }

    return 0;
}