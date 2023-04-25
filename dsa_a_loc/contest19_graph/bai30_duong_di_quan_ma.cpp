#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int a[1005][1005];

int dx[8] = {-2, -2, -1, -1, +1, +1, +2, +2};
int dy[8] = {-1, +1, -2, +2, -2, +2, -1, +1};

int d[1005][1005];
bool visited[1005][1005];

int n, s, t, u, v;

int bfs(int s, int t)
{
    queue<pair<int, int>> q;
    q.push({s, t});
    visited[s][t] = true;

    while (!q.empty())
    {
        pair<int, int> x = q.front();
        q.pop();
        if (x.first == u && x.second == v)
            return d[u][v];

        int i1 = x.first, j1 = x.second;
        for (int i = 0; i < 8; i++)
        {
            int inew = i1 + dx[i];
            int jnew = j1 + dy[i];

            if (inew >= 1 && inew <= n && jnew >= 1 && jnew <= n && a[inew][jnew] && !visited[inew][jnew])
            {
                q.push({inew, jnew});
                visited[inew][jnew] = true;
                d[inew][jnew] = d[i1][j1] + 1;
            }
        }
    }

    return -1;
}

void run_case()
{
    cin >> n;
    cin >> s >> t >> u >> v;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    memset(d, 0, sizeof(d));
    memset(visited, false, sizeof(visited));

    cout << bfs(s, t);

    string s = "";
    s.pop_back();
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