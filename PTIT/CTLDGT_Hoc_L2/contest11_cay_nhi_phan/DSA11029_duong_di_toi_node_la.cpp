#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1000 + 5;

int n;
vector<int> ke[MAX];
int parent[MAX];

vector<int> leafs;
void dfs(int u)
{
    if (ke[u].size() == 0)
        leafs.push_back(u);
    for (auto v : ke[u])
    {
        parent[v] = u;
        dfs(v);
    }
}

void path(int s, int t)
{
    vector<int> path;
    while (t != s)
    {
        path.push_back(t);
        t = parent[t];
    }
    path.push_back(t);

    reverse(path.begin(), path.end());
    for (auto x : path)
        cout << x << " ";
    cout << endl;
}

void run_case()
{
    cin >> n;

    memset(ke, 0, sizeof(ke));
    memset(parent, -1, sizeof(parent));
    leafs.clear();

    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
    }

    dfs(1);

    sort(leafs.begin(), leafs.end());
    for (auto x : leafs)
    {
        path(1, x);
    }
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