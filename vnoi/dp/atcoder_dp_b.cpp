#include <bits/stdc++.h>
using namespace std;

const int MAX = 2e5 + 5;
const int INF = 1e9;

int n, k;
int h[MAX];
int f[MAX];

void run_case()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> h[i];

    fill(f + 1, f + n + 1, INF);

    f[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i - j >= 1)
                f[i] = min({f[i], f[i - j] + abs(h[i] - h[i - j])});
        }
    }

    cout << f[n];
}

int main()
{
#define LOCAL

#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int Test = 1;
    // cin >> Test;
    for (int test = 0; test < Test; test++)
    {
        run_case();
    }

    return 0;
}