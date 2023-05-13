#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 100 + 5;

bool visited[MAX];
int parent[MAX];
int a[MAX][MAX];
int n, u;

void dfs(int u)
{
    stack<int> stk;
    stk.push(u);
    cout << u << " ";
    visited[u] = true;

    while (stk.size())
    {
        int top = stk.top();
        stk.pop();
        for (int i = 1; i <= n; i++)
        {
            if (!visited[i] && a[top][i])
            {
                 cout << i << " ";
                stk.push(top);
                stk.push(i);
                visited[i] = true;
                parent[i] = top;
                break;
            }
        }
    }
}
void run_case()
{
    // 5 1
    // 0 1 0 1 1
    // 1 0 1 1 0
    // 0 1 0 1 1
    // 1 1 1 0 0
    // 1 0 1 0 0

    // 4 1
    // 5 3
    // 4 3
    // 5 1
    // 3 2
    // 4 2
    // 2 1

    cin >> n >> u;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    memset(parent, -1, sizeof(parent));
    memset(visited, false, sizeof(visited));

    dfs(u);
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