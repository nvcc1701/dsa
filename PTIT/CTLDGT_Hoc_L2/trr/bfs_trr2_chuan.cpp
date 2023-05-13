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

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while (q.size())
    {
        int top = q.front();
        q.pop();
        cout << top << " ";

        for (int i = 1; i <= n; i++)
        {
            if (a[top][i] && !visited[i])
            {
                q.push(i);
                visited[i] = true;
                parent[i] = top;
            }
        }
    }
}

void run_case()
{
    cin >> n >> u;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    memset(parent, -1, sizeof(parent));
    memset(visited, false, sizeof(visited));

    bfs(u);
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