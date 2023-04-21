#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

vector<int> ke[1001];
bool visited[1001];
int v, e, start;

void bfs(int x)
{
    queue<int> q;
    q.push(x);
    visited[x] = true;

    while (!q.empty())
    {
        int top = q.front();
        cout << top << " ";
        for (auto x : ke[top])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
            }
        }
        q.pop();
    }
}

void run_case()
{
    memset(ke, 0, sizeof(ke));
    memset(visited, false, sizeof(visited));

    cin >> v >> e >> start;
    int x, y;

    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    bfs(start);
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