#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1001;

int v, e;
int parent[MAX];
int counts[MAX];
int sz[MAX];
vector<ii> canh;

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

void Union(int x, int y)
{
    x = Find(x);
    y = Find(y);

    if (x != y)
    {
        if (counts[x] > counts[y] || (counts[x] == counts[y] && x < y))
            parent[y] = x;
        else
            parent[x] = y;
    }
}

bool check[1001];

void run_case()
{
    // memset(counts, 0, sizeof(counts));

    cin >> v >> e;
    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        canh.push_back({x, y});
        counts[x]++;
        counts[y]++;
    }

    init();

    for (auto [x, y] : canh)
    {
        Union(x, y);
    }

    for (int i = 1; i <= v; i++)
    {
        if (i == parent[i])
            cout << i << " ";
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