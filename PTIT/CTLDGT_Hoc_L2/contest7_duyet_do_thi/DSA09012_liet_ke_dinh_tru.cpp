#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int v, e;
vector<int> adj[1001];
bool visited[1001];

void dfs(int u)
{
    visited[u] = true;

    for (auto v : adj[u])
    {
        if (!visited[v])
            dfs(v);
    }
}

void run_case()
{
    cin >> v >> e;
    memset(adj, 0, sizeof(adj));
    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 1; i <= v; i++)
    {
        sort(adj[i].begin(), adj[i].end());
    }

    memset(visited, false, sizeof(visited));
    int tplt = 0;
    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
        {
            tplt++;
            dfs(i);
        }
    }

    int res = 0;
    for (int i = 1; i <= v; i++)
    {
        int cnt = 0;
        memset(visited, false, sizeof(visited));
        visited[i] = true;

        for (int j = 1; j <= v; j++)
        {
            if (!visited[j])
            {
                cnt++;
                dfs(j);
            }
        }

        if (cnt > tplt)
        {
            cout << i << " ";
        }
    }
    cout << endl;
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