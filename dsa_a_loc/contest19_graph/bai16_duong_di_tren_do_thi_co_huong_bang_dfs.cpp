#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

bool visited[1001];
int parent[1001];
set<int> ke[1001];

void dfs(int s)
{
    visited[s] = true;

    for (auto x : ke[s])
    {
        if (!visited[x])
        {
            parent[x] = s;
            dfs(x);
        }
    }
}

void path(int s, int t)
{
    dfs(s);

    if (parent[t] == -1)
    {
        cout << -1;
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
}

void run_case()
{
    int v, e, s, t;
    cin >> v >> e >> s >> t;

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].insert(y);
    }

    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
    path(s, t);
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