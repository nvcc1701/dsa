#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 500 + 5;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int n, m;
int color[MAX][MAX];
bool visited[MAX][MAX];
int dist[MAX][MAX];

bool isValid(int x, int y)
{
    if (x >= 0 && x < n && y >= 0 && y < m && !visited[x][y] && color[x][y] != 0)
        return true;
    return false;
}

void bfs()
{
    queue<tuple<int, int, int>> q;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (color[i][j] == 2)
            {
                q.push({i, j, 0});
                visited[i][j] = true;
            }
        }

    while (q.size())
    {
        auto [x, y, cnt] = q.front();
        q.pop();

        if (color[x][y] == 1)
        {
            dist[x][y] = cnt;
            color[x][y] = 2;
        }

        int xnew, ynew;
        for (int k = 0; k < 4; k++)
        {
            xnew = x + dx[k];
            ynew = y + dy[k];

            if (isValid(xnew, ynew))
            {
                q.push({xnew, ynew, cnt + 1});
                visited[xnew][ynew] = true;
            }
        }
    }

    int res = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (color[i][j] == 1)
            {
                cout << -1 << endl;
                return;
            }
            res = max(res, dist[i][j]);
        }
    cout << res << endl;
}

void run_case()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> color[i][j];

    memset(visited, false, sizeof(visited));
    memset(dist, -1, sizeof(dist));

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