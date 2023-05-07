#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int k, v, e;
vector<int> ke[1001];
bool visited[1001];
int counts[1001];
vector<int> a;

int res = 0;
void dfs(int u)
{
    visited[u] = true;
    counts[u]++;
    if (counts[u] == k)
        res++;
    for (auto v : ke[u])
    {
        if (!visited[v])
            dfs(v);
    }
}

void run_case()
{
    cin >> k >> v >> e;

    int x, y;
    for (int i = 0; i < k; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        ke[x].push_back(y);
    }

    for (auto x : a)
    {
        memset(visited, false, sizeof(visited));
        dfs(x);
    }

    cout << res;
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