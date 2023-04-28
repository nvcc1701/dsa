#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int v, e;
bool visited[1001];
vector<int> ke[1001];

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while (!q.empty())
    {
        int top = q.front();
        q.pop();

        for (auto x : ke[top])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

void run_case()
{
    cin >> v >> e;

    memset(ke, 0, sizeof(ke));
    memset(visited, false, sizeof(visited));

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

    int cnt = 0;
    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
        {
            bfs(i);
            cnt++;
        }
    }

    cout << cnt << endl;
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