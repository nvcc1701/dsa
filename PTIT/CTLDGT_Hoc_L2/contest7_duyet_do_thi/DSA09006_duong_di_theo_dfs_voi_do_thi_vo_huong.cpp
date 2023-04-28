#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int v, e, s, t;
bool visited[1001];
vector<int> ke[1001];
int parent[1001];

void dfs(int u)
{
    visited[u] = true;
    for (auto v : ke[u])
    {
        if (!visited[v])
        {
            parent[v] = u;
            dfs(v);
        }
    }
}

void path()
{
    dfs(s);

    if (parent[t] == -1)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> res;
    while (t != s)
    {
        res.push_back(t);
        t = parent[t];
    }
    res.push_back(s);

    reverse(res.begin(), res.end());
    for (auto x : res)
        cout << x << " ";
    cout << endl;
}

void run_case()
{
    cin >> v >> e >> s >> t;

    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
    memset(ke, 0, sizeof(ke));

    for (int i = 1; i <= e; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    path();
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