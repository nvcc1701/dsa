#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 3e3 + 5;

int n;
double a[MAX], f[MAX][MAX]; // xac suat de tung i dong xu co j mat ngua

void run_case()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int maxN = n / 2 + 1;

    for (int i = 0; i <= n; i++)
        f[i][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= maxN; j++)
        {
            f[i][j] = f[i - 1][j] * (1 - a[i]) + f[i - 1][j - 1] * a[i];
            // cout << f[i][j] << " ";
        }
        // cout << endl;
    }

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= maxN; j++)
    //     {
    //         cout << f[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << fixed << setprecision(10) << f[n][maxN];
}

int main()
{

#define LOCAL

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