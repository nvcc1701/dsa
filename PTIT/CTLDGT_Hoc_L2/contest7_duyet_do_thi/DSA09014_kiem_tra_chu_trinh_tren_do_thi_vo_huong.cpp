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
int tplt[1001];

bool dfs(int u, int par)
{
    visited[u] = true;

    for (auto v : ke[u])
    {
        if (!visited[v])
        {
            if (dfs(v, u))
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

    memset(ke, 0, sizeof(ke));
    memset(visited, false, sizeof(visited));
    memset(tplt, -1, sizeof(tplt));

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
        {
            if (dfs(i, 0))
            {
                cout << "YES\n";
                return;
            }
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