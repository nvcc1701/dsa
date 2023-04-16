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
    int n, c;
    cin >> c >> n;

    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int f[n + 1][c + 1]; // voi khong luon la j, duoc chon n con bo dau tien, thi max la
    memset(f, 0, sizeof(f));
    f[0][0] = 0;

    for (int i = 1; i <= n; i++) // chon i con bo
    {
        for (int j = 1; j <= c; j++) // khoi luong
        {
            if (a[i] <= j)
                f[i][j] = max(f[i - 1][j], f[i - 1][j - a[i]] + a[i]);
            else
                f[i][j] = f[i - 1][j];
        }
    }

    cout << f[n][c];
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