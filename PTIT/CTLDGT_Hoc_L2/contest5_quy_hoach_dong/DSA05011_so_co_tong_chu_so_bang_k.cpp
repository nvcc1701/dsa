#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, K;

void run_case()
{
    cin >> n >> K;
    ll f[n + 1][K + 1]; // voi i chu so thi co bao nhieu cach tao thanh tong j

    memset(f, 0, sizeof(f));

    for (int i = 1; i <= 9; i++)
        if (i <= K)
            f[1][i] = 1;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= K; j++)
        {
            for (int k = 0; k <= 9 * (i - 1); k++)
            {
                if (j - k >= 0 && j - k <= 9)
                {
                    f[i][j] += f[i - 1][k];
                    f[i][j] %= MOD;
                }
            }
        }
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= K; j++)
    //     {
    //         cout << f[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << f[n][K] << endl;
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
    cin >> Test;
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}
