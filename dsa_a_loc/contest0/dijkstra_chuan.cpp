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
int a[1001][1001];

void dijkstra()
{
    priority_queue<ii, vector<ii>, greater<ii>> q; // luu gia tri tu dinh s to dinh i

    q.push({0, u});
    vector<int> d(v + 1, INF);
    d[u] = 0;
    while (!q.empty())
    {
        auto [dist, u] = q.top();
        q.pop();

        if (dist > d[u])
            continue;
        for (int k = 1; k <= v; k++)
        {
            if (a[u][k] > 0)
            {
                int w = a[u][k];
                if (d[k] > d[u] + w)
                {
                    d[k] = d[u] + w;
                    q.push({d[k], k});
                }
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
    cin >> v >> e >> u;

    for (int i = 1; i <= v; i++)
        for (int j = 1; j <= v; j++)
            a[i][j] = 0;

    int x, y, w;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y >> w;
        a[x][y] = w;
        a[y][x] = w;
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