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
bool visited[1001];
stack<int> stk;

void dfs(int u)
{
    visited[u] = true;

    for (auto v : ke[u])
    {
        if (!visited[v])
            dfs(v);
    }

    stk.push(u);
}

void dfs2(int u)
{
    visited[u] = true;

    for (auto v : ke[u])
    {
        if (!visited[v])
            dfs(v);
    }
}

void kosaraju()
{
    vector<int> res;
    int cnt = 0;

    memset(visited, false, sizeof(visited));

    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
            dfs(i);
    }

    memset(visited, false, sizeof(visited));

    while (stk.size())
    {
        int top = stk.top();
        stk.pop();
        if (!visited[top])
        {
            dfs2(top);
            cnt++;
        }
    }

    cout << cnt << endl;
}

void run_case()
{
    cin >> v >> e;

    for (int i = 1; i <= v; i++)
        ke[i].clear();

    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    kosaraju();
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