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
int parent[MAX];
int sz[MAX];

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
    return parent[u] = Find(parent[u]);
}

int res = -1;
bool Union(int x, int y)
{
    x = Find(x);
    y = Find(y);

    if (x == y)
        return false;

    if (sz[x] < sz[y])
        swap(x, y);
    sz[x] += sz[y];
    res = max(res, sz[x]);
    parent[y] = x;
    return true;
}

void run_case()
{
    cin >> v >> e;

    init();

    res = -1;
    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        Union(x, y);
    }

    cout << res << endl;
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