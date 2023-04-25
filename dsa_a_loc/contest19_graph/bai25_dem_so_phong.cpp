#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int a[1005][1005];
bool visited[1005][1005];
int n, m;

void dfs(int x, int y)
{
    visited[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int inew = x + dx[i];
        int jnew = y + dy[i];

        if (inew >= 1 && inew <= n && jnew >= 1 && jnew <= m && !visited[inew][jnew] && a[inew][jnew])
            dfs(inew, jnew);
    }
}

void run_case()
{
    cin >> n >> m;

    char c;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> c;
            if (c == '.')
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    memset(visited, false, sizeof(visited));

    int tplt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (!visited[i][j] && a[i][j])
            {
                dfs(i, j);
                tplt++;
            }
        }
    }
    cout << tplt;
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