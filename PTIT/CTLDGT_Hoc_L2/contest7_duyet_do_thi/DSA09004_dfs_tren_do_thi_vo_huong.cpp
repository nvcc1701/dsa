#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

vector<int> a[1000 + 1];
bool visited[1001];

void dfs(int x)
{
    if (visited[x])
        return;

    cout << x << " ";
    visited[x] = true;
    for (auto x1 : a[x])
    {
        dfs(x1);
    }
}

void run_case()
{
    memset(a, 0, sizeof(a));
    memset(visited, false, sizeof(visited));

    int v, e, x;
    cin >> v >> e >> x;

    int x1, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x1 >> y;
        a[x1].push_back(y);
        a[y].push_back(x1);
    }
    dfs(x);
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