#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

vector<int> adj[1001];
bool visited[1001];
int cnt = 0;
int res = 0;

void dfs(int u)
{
    cnt++;
    visited[u] = true;

    for (auto v : adj[u])
    {
        if (!visited[v])
            dfs(v);
    }
}

void run_case()
{
    // kosaraju or tarjan
    int v, e;
    cin >> v >> e;

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            res = max(res, cnt);
            cnt = 0;
        }
    }
    cout << res << "\n";
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