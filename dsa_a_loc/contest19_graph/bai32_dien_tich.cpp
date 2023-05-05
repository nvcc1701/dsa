#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

char a[1001][1001];
bool visited[1001][1001];
int n, m, cnt;

bool isValid(int x, int y)
{
    if (x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] == '.' && !visited[x][y])
        return true;
    return false;
}

void dfs(int x, int y)
{
    visited[x][y] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int xnew = x + dx[i];
        int ynew = y + dy[i];
        if (isValid(xnew, ynew))
        {
            dfs(xnew, ynew);
        }
    }
}

void run_case()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    memset(visited, false, sizeof(visited));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cnt = 0;
            if (!visited[i][j] && a[i][j] == '.')
            {
                if (j == 6)
                    cout << "";

                dfs(i, j);
                cout << cnt << " ";
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