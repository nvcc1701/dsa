#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int n, k;

int f[1001][1001];
void dp()
{
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= 1000; j++)
        {
            if (i == j || j == 0)
                f[i][j] = 1;
            else
            {
                f[i][j] = f[i - 1][j - 1] + f[i - 1][j];
                f[i][j] %= MOD;
            }
        }
    }
}

void run_case()
{
    cin >> n >> k;

    cout << f[n][k] << endl;
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
    dp();
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}