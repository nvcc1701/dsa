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
bool visted[1001];
vector<int> ke[1001];

int tplt;

void dfs(int u)
{
    visted[u] = true;

    for (auto v : ke[u])
    {
        if (!visted[v])
            dfs(v);
    }
}

void run_case()
{
    cin >> v >> e;
    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    tplt = 0;
    for (int i = 1; i <= v; i++)
    {
        if (!visted[i])
        {
            tplt++;
            dfs(i);
        }
    }

    int res = 0;
    for (int i = 1; i <= v; i++)
    {
        memset(visted, false, sizeof(visted));
        visted[i] = true;
        int cnt = 0;
        for (int j = 1; j <= v; j++)
        {
            if (!visted[j])
            {
                cnt++;
                dfs(j);
            }
        }

        if (cnt > tplt)
            res++;
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