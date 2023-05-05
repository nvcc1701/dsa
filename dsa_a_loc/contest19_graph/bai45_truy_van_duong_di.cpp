#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 102;

int v, e;
int a[MAX][MAX];

void Floyd()
{
    for (int k = 1; k <= v; k++)
    {
        for (int i = 1; i <= v; i++)
        {
            for (int j = 1; j <= v; j++)
            {
                a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
            }
        }
    }
}

void run_case()
{
    cin >> v >> e;

    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
        {
            if (i == j)
                a[i][j] = 0;
            else
                a[i][j] = INF;
        }

    int x, y, w;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y >> w;
        a[x][y] = w;
        a[y][x] = w;
    }

    Floyd();

    int q;
    cin >> q;
    while (q--)
    {
        cin >> x >> y;
        cout << a[x][y] << endl;
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