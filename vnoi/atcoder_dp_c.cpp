#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int INF = 1e9 + 5;
const int MAX = 1e5 + 5;

int n;
int f[MAX][4];

void run_case()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        f[i][0] = max(f[i - 1][1] + a, f[i - 1][2] + a);
        f[i][1] = max(f[i - 1][0] + b, f[i - 1][2] + b);
        f[i][2] = max(f[i - 1][1] + c, f[i - 1][0] + c);
    }

    cout << max({f[n][0], f[n][1], f[n][2]});
}

int main()
{
    // #define LOCAL

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