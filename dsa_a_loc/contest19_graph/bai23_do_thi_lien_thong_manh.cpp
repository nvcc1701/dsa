#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

vector<int> ke[1001];
bool visited[1001];
int tplt;

void dfs(int u)
{
    visited[u] = true;
    for (auto v : ke[u])
        if (!visited[v])
            dfs(v);
}

bool dfs2(int u, int par)
{
    visited[u] = true;
    for (auto v : ke[u])
    {
        if (!visited[v])
        {
            if (dfs2(v, u))
                return true;
        }
        else if (v != par)
        {
            return true;
        }
    }
    return false;
}

void run_case()
{
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    if (e != v - 1)
    {
        cout << 0;
        return;
    }

    memset(visited, false, sizeof(visited));
    tplt = 0;
    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            tplt++;
        }
    }

    if (tplt > 1)
    {
        cout << 0;
        return;
    }

    memset(visited, false, sizeof(visited));
    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
        {
            if (dfs2(i, 0))
            {
                cout << 0;
                return;
            }
        }
    }
    cout << 1;
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