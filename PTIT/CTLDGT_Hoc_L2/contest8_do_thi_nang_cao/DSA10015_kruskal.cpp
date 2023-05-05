#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e2 + 5;

int v, e;
int parent[MAX];
int sz[MAX];
struct edge
{
    int x, y, w;
};
vector<edge> canh;

void init()
{
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
    else
    {
        parent[u] = Find(parent[u]);
        return parent[u];
    }
}

bool Union(int x, int y)
{
    x = Find(x);
    y = Find(y);

    if (x == y)
        return false;

    // union
    if (sz[x] < sz[y])
        swap(x, y);

    sz[x] += sz[y];
    parent[y] = x;

    return true;
}

void kruskal()
{
    // sap xep
    sort(canh.begin(), canh.end(), [](edge x, edge y) { return x.w < y.w; });

    int d = 0;

    for (auto e : canh)
    {
        if (Union(e.x, e.y))
        {
            d += e.w;
        }
    }

    cout << d << endl;
}

void run_case()
{
    canh.clear();
    cin >> v >> e;
    int x, y, w;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y >> w;
        edge e{x, y, w};
        canh.push_back(e);
    }

    init();

    kruskal();
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