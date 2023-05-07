#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int v, e, s;
vector<int> ke[1001];
bool visited[1001];

vector<ii> res;
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto v : ke[u])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
                res.push_back({u, v});
            }
        }
    }
}

void run_case()
{
    cin >> v >> e >> s;

    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    for (int i = 1; i <= v; i++)
        sort(ke[i].begin(), ke[i].end());

    bfs(s);

    for (auto [x, y] : res)
        cout << x << "->" << y << endl;
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