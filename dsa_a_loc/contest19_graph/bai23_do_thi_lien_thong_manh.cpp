#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int v, e;
vector<int> adj[1001];
bool visited[1001];
int disc[1001], low[1001], in_stack[1001];
int scc = 0, timer = 0;
stack<int> stk;

void dfs(int u)
{
    visited[u] = true;
    in_stack[u] = true;
    disc[u] = low[u] = timer++;
    stk.push(u);

    for (auto v : adj[u])
    {
        if (!visited[v])
        {
            dfs(v);
            low[u] = min(low[u], low[v]);
        }
        else if (in_stack[v])
            low[u] = min(low[u], disc[v]);
    }

    if (disc[u] == low[u])
    {
        scc++;
        while (stk.top() != u)
        {
            in_stack[stk.top()] = false;
            stk.pop();
        }

        in_stack[u] = false;
        stk.pop();
    }
}

void run_case()
{
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }

    memset(visited, false, sizeof(visited));
    memset(in_stack, false, sizeof(in_stack));
    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
            dfs(i);
    }

    // strong connect
    if (scc == 1)
        cout << 1;
    else
        cout << 0;
    cout << endl;
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