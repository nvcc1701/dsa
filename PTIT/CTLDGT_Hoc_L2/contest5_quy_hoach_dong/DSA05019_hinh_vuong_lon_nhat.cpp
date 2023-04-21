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
    int n, m;
    cin >> n >> m;
    int a[n + 1][m + 1];
    int f[n + 1][m + 1]; // o vi tri i,j thi tao duoc hinh vuong co do dai max la bn

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            f[i][j] = a[i][j];
        }

    int res = 0;
    for (int i = 2; i <= n; i++)
        for (int j = 2; j <= m; j++)
        {
            if (a[i][j] == 1)
                f[i][j] = 1 + min({f[i - 1][j - 1], f[i - 1][j], f[i][j - 1]});
            res = max(f[i][j], res);
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