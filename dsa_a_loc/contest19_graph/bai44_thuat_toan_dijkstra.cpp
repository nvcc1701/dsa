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
vector<ii> ke[1001];

void dijkstra()
{
    priority_queue<ii, vector<ii>, greater<ii>> q; 

    q.push({0, s});
    vector<int> d(v + 1, INF);
    d[s] = 0;
    while (!q.empty())
    {
        ii t = q.top();
        q.pop();

        int dis = t.first, u = t.second;  // lay ra dinh dau tien cua ngan xep
        if (dis > d[u])
            continue;
        for (ii e : ke[u]) // duyet cac dinh ke voi dinh dau tien cua ngan xep
        {
            int v = e.first, w = e.second;
            if (d[v] > d[u] + w)
            {
                d[v] = d[u] + w;
                q.push({d[v], v});
            }
        }
    }

    for (int i = 1; i <= v; i++)
    {
        cout << d[i] << " ";
    }
}

void run_case()
{
    cin >> v >> e >> s;

    int x, y, w;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y >> w;
        ke[x].push_back({y, w});
        ke[y].push_back({x, w});
    }

    dijkstra();
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