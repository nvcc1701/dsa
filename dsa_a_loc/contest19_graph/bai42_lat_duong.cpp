#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll v, e;
ll parent[MAX];
ll sz[MAX];
ll max_s;
ll cnt;

void init()
{
    for (ll i = 1; i <= v; i++)
    {
        parent[i] = i;
        sz[i] = 1;
    }
}

ll Find(ll u)
{
    if (u == parent[u])
        return u;
    return parent[u] = Find(parent[u]);
}

bool Union(ll x, ll y)
{
    x = Find(x);
    y = Find(y);

    if (x == y)
        return false;

    if (sz[x] < sz[y])
        swap(x, y);
    sz[x] += sz[y];

    max_s = max(max_s, sz[x]); // ud maxsize

    parent[y] = x;
    return true;
}

void run_case()
{
    cin >> v >> e;

    max_s = 1;
    init();

    ll x, y;
    for (ll i = 0; i < e; i++)
    {
        cin >> x >> y;
        if (Union(x, y))
            v -= 1;
        cout << v << " " << max_s << endl;
    }
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