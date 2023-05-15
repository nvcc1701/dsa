#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e5 + 5;

vector<int> ke[MAX];
int v, e;
int res = -INF;
int f[MAX];

int dfs(int u)
{
    if (f[u])
        return f[u];
    for (auto v : ke[u])
    {
        f[v] = dfs(v);
        f[u] = max(f[u], f[v] + 1);
    }
    return f[u];
}

void run_case()
{
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
    }

    for (int i = 1; i <= v; i++)
    {
        dfs(i);
    }
    int res = -INF;
    for (int i = 1; i <= v; i++)
    {
        res = max(res, f[i]);
    }

    cout << res;
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