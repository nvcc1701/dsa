#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int dx[] = {0, 0, -1, 1, -1, 1, -1, 1};
int dy[] = {-1, 1, 0, 0, -1, -1, 1, 1};

int visited[1001][1001];
int a[1001][1001];
int n, s, t, u, v;

void bfs(int s, int t)
{
    queue<pair<int, int>> q;
    q.push({s, t});
    visited[s][t] = 0;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();

        if (p.first == u && p.second == v)
            break;

        for (int i = 0; i < 8; i++)
        {
            int inew = p.first + dx[i];
            int jnew = p.second + dy[i];

            if (inew >= 1 && inew <= n && jnew >= 1 && jnew <= n && a[inew][jnew] && !visited[inew][jnew])
            {
                if (!visited[inew][jnew])
                {
                    q.push({inew, jnew});
                    visited[inew][jnew] = visited[p.first][p.second] + 1;
                }
            }
        }
    }
}

void run_case()
{
    cin >> n >> s >> t >> u >> v;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    memset(visited, 0, sizeof(visited));

    bfs(s, t);
    if (visited[u][v] != 0)
    {
        cout << visited[u][v] << endl;
    }
    else
    {
        cout << -1 << endl;
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