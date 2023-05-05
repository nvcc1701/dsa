#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 10e6 + 5;

// int v, e;
// int parent[MAX];
// int sz[MAX];
// struct edge
// {
//     int x, y, w;
// };
// vector<edge> canh;

// void init()
// {
//     for (int i = 1; i <= v; i++)
//     {
//         parent[i] = i;
//         sz[i] = 1;
//     }
// }

// int Find(int u)
// {
//     if (u == parent[u])
//         return u;
//     return parent[u] = Find(parent[u]);
// }

// bool Union(int x, int y)
// {
//     x = Find(x);
//     y = Find(y);

//     if (x == y)
//         return false;

//     if (sz[x] < sz[y])
//         swap(x, y);
//     sz[x] += sz[y];
//     parent[y] = x;

//     return true;
// }

// void kruskal()
// {
//     sort(canh.begin(), canh.end(), [](edge a, edge b) { return a.w < b.w; });

//     ll d = 0;
//     vector<edge> mst;
//     for (auto e : canh)
//     {
//         if (mst.size() == v - 1)
//             break;

//         if (Union(e.x, e.y))
//         {
//             d += e.w;
//             mst.push_back(e);
//         }
//     }

//     if (mst.size() < v - 1)
//     {
//         cout << "IMPOSSIBLE\n";
//     }
//     else
//     {
//         cout << d << endl;
//     }
// }

// void run_case()
// {
//     cin >> v >> e;
//     int x, y, z;
//     for (int i = 0; i < e; i++)
//     {
//         cin >> x >> y >> z;
//         edge e{x, y, z};
//         canh.push_back(e);
//     }

//     init();

//     kruskal();
// }

int v, e;
vector<ii> ke[MAX];
bool taken[MAX];

void Prim(int s)
{
    priority_queue<ii, vector<ii>, greater<ii>> q;
    taken[s] = true;
    ll d = 0;

    for (auto [u, w] : ke[s])
        if (!taken[u])
            q.push({w, u});

    while (!q.empty())
    {
        int u = q.top().second, w = q.top().first;
        q.pop();

        if (!taken[u])
        {
            d += w;
            taken[u] = true;
            for (auto [u, w] : ke[u])
            {
                if (!taken[u])
                    q.push({w, u});
            }
        }
    }

    for (int i = 1; i <= v; i++)
    {
        if (!taken[i])
        {
            cout << "IMPOSSIBLE\n";
            return;
        }
    }

    cout << d << endl;
}

void run_case()
{
    cin >> v >> e;
    int x, y, z;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y >> z;
        ke[x].push_back({y, z});
        ke[y].push_back({x, z});
    }

    memset(taken, false, sizeof(taken));

    Prim(1);
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