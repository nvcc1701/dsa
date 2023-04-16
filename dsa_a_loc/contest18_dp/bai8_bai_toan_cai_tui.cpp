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
    int N, V;
    cin >> N >> V;
    int w[N + 1], v[N + 1];

    for (int i = 1; i <= N; i++)
        cin >> w[i];

    for (int i = 1; i <= N; i++)
        cin >> v[i];

    int f[N + 1][V + 1];

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= V; j++)
        {
            if (w[i] <= j)
            {
                f[i][j] = max(v[i] + f[i - 1][j - w[i]], f[i-1][j]);
            }
        }
    }
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