#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int v, m;
vector<int> ke[1001];
int g[1001];

int res;
bool ok;
void dfs(int u, int cnt)
{
    if (cnt == m + 1)
        return;

    ok = false;
    for (auto v : ke[u])
    {
        if (g[v])
            dfs(v, cnt + 1);
        else
            dfs(v, 0);
        ok = true;
    }

    if (!ok)
        res++;
}

void run_case()
{
    cin >> v >> m;

    for (int i = 1; i <= v; i++)
        cin >> g[i];

    int x, y;
    for (int i = 1; i <= v - 1; i++)
    {
        cin >> x >> y;
        ke[x].push_back(y);
    }
    res = 0;
    dfs(1, g[1]);

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