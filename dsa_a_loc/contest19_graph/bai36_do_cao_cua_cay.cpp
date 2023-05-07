#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int v, cnt;
vector<int> ke[1001];
int depth[1001];

void dfs(int u)
{
    cnt++;
    for (auto v : ke[u])
    {
        depth[v] = cnt;
        dfs(v);
    }
    cnt--;
}

void run_case()
{
    cin >> v;
    int x, y;
    for (int i = 1; i <= v - 1; i++)
    {
        cin >> x >> y;
        ke[x].push_back(y);
    }

    cnt = 0;
    dfs(1);

    for (int i = 1; i <= v; i++)
        cout << depth[i] << " ";
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