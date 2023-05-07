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
vector<int> ke[1001];
vector<ii> canh;
bool visited[1001];

void reset()
{
    for (int i = 1; i <= v; i++)
        ke[i].clear();

    memset(visited, false, sizeof(visited));

    canh.clear();
}

void dfs(int u, ii c)
{
    visited[u] = true;

    for (auto v : ke[u])
    {
        if ((u == c.first && v == c.second) || (u == c.second && v == c.first))
            continue;

        if (!visited[v])
            dfs(v, c);
    }
}

int tplt;
void run_case()
{
    cin >> v >> e;
    reset();

    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);

        canh.push_back({x, y});
    }

    // dem tplt
    tplt = 0;
    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
        {
            dfs(i, {-1, -1});
            tplt++;
        }
    }

    int res = 0;
    for (auto [x, y] : canh)
    {
        int cnt = 0;
        memset(visited, false, sizeof(visited));

        for (int i = 1; i <= v; i++)
        {
            if (!visited[i])
            {
                dfs(i, {x, y});
                cnt++;
            }
        }

        if (cnt > tplt)
        {
            cout << x << " " << y << " ";
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