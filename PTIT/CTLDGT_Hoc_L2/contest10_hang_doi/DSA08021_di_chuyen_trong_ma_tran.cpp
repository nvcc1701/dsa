#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e3 + 5;

int m, n;
int a[MAX][MAX];
bool used[MAX][MAX];

bool check(int x, int y)
{
    if (x >= 1 && x <= m && y >= 1 && y <= n && !used[x][y])
        return true;
    return false;
}

void bfs()
{
    queue<pair<ii, int>> q;
    q.push({{1, 1}, 0});
    used[1][1] = true;

    while (q.size() > 0)
    {
        auto [top, cnt] = q.front();
        q.pop();
        auto [i, j] = top;
        // cout << i << " " << j << endl;
        if (i == m && j == n)
        {
            cout << cnt << endl;
            return;
        }

        int inew, jnew;
        inew = i, jnew = j + a[i][j];
        if (check(inew, jnew))
        {
            q.push({{inew, jnew}, cnt + 1});
            used[inew][jnew] = true;
        }

        inew = i + a[i][j], jnew = j;
        if (check(inew, jnew))
        {
            q.push({{inew, jnew}, cnt + 1});
            used[inew][jnew] = true;
        }
    }

    cout << -1 << endl;
}

void run_case()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }

    memset(used, false, sizeof(used));
    bfs();
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