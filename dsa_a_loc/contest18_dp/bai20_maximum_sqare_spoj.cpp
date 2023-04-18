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

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    int f[n + 1][m + 1]; //o tri tri i, j thi co the tao duoc hinh vuong co canh max la bn?
    memset(f, 0, sizeof(f));

    //csqhd khi cac canh cua hinh vuong o vi tri i == 1 j == 1 thi no se bang cac ...

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j])
                f[i][j] = 1 + min({f[i][j - 1], f[i - 1][j], f[i - 1][j - 1]}); //chon canh nho nhat trong 3 hinh vuong thi neu chon canh khac thi ko the tao thanh 1 hinh vuong
            else
                f[i][j] = 0;
            res = max(res, f[i][j]);
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