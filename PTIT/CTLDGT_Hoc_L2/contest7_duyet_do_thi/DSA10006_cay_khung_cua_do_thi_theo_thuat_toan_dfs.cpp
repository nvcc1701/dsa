#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e3 + 5;

int v, e, u;
vector<int> adj[MAX];
bool visited[MAX];
vector<ii> res;

void dfs(int u)
{
    visited[u] = true;
    for (auto v : adj[u])
    {
        if (!visited[v])
        {
            res.push_back({u, v});
            dfs(v);
        }
    }
}

void run_case()
{
    cin >> v >> e >> u;

    res.clear();
    memset(adj, 0, sizeof(adj));
    memset(visited, 0, sizeof(visited));

    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(u);

    if (res.size() != v - 1)
    {
        cout << -1 << endl;
        return;
    }

    for (auto [x, y] : res)
    {
        cout << x << " " << y << endl;
    }
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