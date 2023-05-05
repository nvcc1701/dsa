#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1000 + 5;

int v, e;
int parent[MAX];
int sz[MAX];
vector<pair<int, int>> adj;

void init()
{
    adj.clear();
    cin >> v >> e;
    for (int i = 1; i <= v; i++)
    {
        parent[i] = i;
        sz[i] = 1;
    }
}

int Find(int u)
{
    if (u == parent[u])
        return u;
    parent[u] = Find(parent[u]);
    return parent[u];
}

bool Union()
{
    // u = Find(u);
    // v = Find(v);

    // if (u == v)
    //     return false;

    // if (sz[u] < sz[v])
    //     swap(u, v);
    // sz[u] += sz[v];
    // parent[v] = u;
    // return true;

    for (auto [x, y] : adj)
    {
        x = Find(x);
        y = Find(y);

        if (x == y)
            return true;
        else
        {
            if (sz[x] < sz[y])
                swap(x, y);

            sz[x] += sz[y];
            parent[y] = x;
        }
    }

    return false;
}

void run_case()
{
    init();
    int x, y;

    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        adj.push_back({x, y});
    }

    if (Union())
    {
        cout << "YES";
    }
    else
        cout << "NO";
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