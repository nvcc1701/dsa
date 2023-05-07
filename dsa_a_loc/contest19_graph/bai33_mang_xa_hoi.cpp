#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 100001;

int v, e, cnt;
vector<int> ke[MAX];
bool visited[MAX];

void dfs(int u)
{
    visited[u] = true;
    cnt++; // dem xem 1 tplt co bao nhieu dinh

    for (auto v : ke[u])
    {
        if (!visited[v])
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

    ll res = 0;

    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
        {
            cnt = 0;
            dfs(i);

            res += 1ll * cnt * (cnt - 1) / 2;
        }
    }

    if (res == e)
        cout << "YES";
    else
        cout << "NO";
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