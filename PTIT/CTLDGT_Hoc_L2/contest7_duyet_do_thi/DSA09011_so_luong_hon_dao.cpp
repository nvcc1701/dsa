#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 500 + 5;

int n, m;
int a[MAX][MAX];
bool visited[MAX][MAX];

int dx[] = {0, 0, 1, -1, -1, 1, -1, 1};
int dy[] = {-1, 1, 0, 0, -1, 1, 1, -1};

bool isValid(int x, int y)
{
    if (x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] == 1 && !visited[x][y])
        return true;
    return false;
}

void dfs(int x, int y)
{
    // cout << x << " " << y << endl;
    visited[x][y] = true;

    for (int k = 0; k < 8; k++)
    {
        int inew = x + dx[k];
        int jnew = y + dy[k];

        if (isValid(inew, jnew))
        {
            dfs(inew, jnew);
        }
    }
}

void run_case()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            visited[i][j] = false;
        }
    }

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (!visited[i][j] && a[i][j] == 1)
            {
                dfs(i, j);
                // cout << endl;
                res++;
            }
        }
    }

    cout << res << endl;
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