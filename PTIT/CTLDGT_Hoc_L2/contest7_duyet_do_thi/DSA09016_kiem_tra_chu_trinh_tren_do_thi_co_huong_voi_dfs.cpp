#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

vector<int> adj[1001];
bool color[1001];

bool dfs(int u)
{
    color[u] = 1;
    for (auto v : adj[u])
    {
        if (color[v] == 0)
        {
            if (dfs(v))
                return true;
        }
        else if (color[v] == 1)
        {
            return true;
        }
    }
    color[u] = 2;
    return false;
}

void run_case()
{
    int v, e;
    cin >> v >> e;

    memset(color, 0, sizeof(color));
    memset(adj, 0, sizeof(adj));

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }

    for (int i = 1; i <= v; i++)
    {
        if (dfs(i))
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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