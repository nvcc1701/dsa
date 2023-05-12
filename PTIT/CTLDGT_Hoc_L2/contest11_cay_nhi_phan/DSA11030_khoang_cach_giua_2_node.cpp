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
bool visited[MAX];
bool ok = false;
void dfs(int s, int t, int cnt)
{
    if (ok)
        return;

    visited[s] = true;
    if (s == t)
    {
        cout << cnt << " ";
        ok = true;
        return;
    }

    for (auto v : ke[s])
    {
        if (!visited[v])
            dfs(v, t, cnt + 1);
    }
}

void run_case()
{
    cin >> n;

    memset(ke, 0, sizeof(ke));

    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        ok = false;
        memset(visited, false, sizeof(visited));
        dfs(x, y, 0);
        cout << endl;
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