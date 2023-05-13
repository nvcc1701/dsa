#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int a[100][100];

void run_case()
{
    int n, m, s;
    cin >> n >> m >> s;
    for (int i = 0; i < m; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        a[x][y] = w;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    //     0 0 0 0 0 0 0 0 0 0
    // 77 0 0 0 0 0 0 0 0 0
    // 62 5 0 0 0 0 0 0 0 0
    // 52 70 25 0 0 0 0 0 0 0
    // 36 5 15 40 0 0 0 0 0 0
    // 1 1 76 32 94 0 0 0 0 0
    // 80 99 54 0 60 95 0 0 0 0
    // 12 91 12 76 95 65 59 0 0 0
    // 83 20 27 98 12 95 84 31 0 0
    // 5 76 55 35 1 88 8 92 24 0
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