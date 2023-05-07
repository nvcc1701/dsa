#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e3 + 5;

int n;
vector<int> adj[MAX];
bool visited[MAX];

bool ok;
void dfs(int u, int par)
{
    if (ok)
        return;
    visited[u] = true;

    for (auto v : adj[u])
    {
        if (!visited[v])
            dfs(v, u);
        else if (v != par)
            ok = true;
    }
}

void run_case()
{
    cin >> n;
    int x, y;

    memset(adj, 0, sizeof(adj));
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    ok = false;
    memset(visited, false, sizeof(visited));

    for (int i = 1; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i, 0);
            if (ok)
            {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
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