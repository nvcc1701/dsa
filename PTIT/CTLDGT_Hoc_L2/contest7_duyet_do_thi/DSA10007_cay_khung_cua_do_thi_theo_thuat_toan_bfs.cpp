#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int v, e, u;
vector<int> adj[1001];
bool visited[1001];
vector<ii> res;

void reset()
{
    memset(adj, 0, sizeof(adj));
    memset(visited, false, sizeof(visited));
    res.clear();
}

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while (q.size())
    {
        int top = q.front();
        q.pop();

        for (auto x : adj[top])
        {
            if (!visited[x])
            {
                q.push(x);
                res.push_back({top, x});
                visited[x] = true;
            }
        }
    }
}

void run_case()
{
    reset();
    cin >> v >> e >> u;

    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    bfs(u);

    if (res.size() != v - 1)
    {
        cout << -1 << endl;
        return;
    }

    for (auto [x, y] : res)
        cout << x << " " << y << endl;
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