#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

bool visited[1005];
vector<int> ke[1005];

void dfs(int s)
{
    visited[s] = true;
    for (auto x : ke[s])
    {
        if (!visited[x])
            dfs(x);
    }
}

void run_case()
{
    int v, e;
    cin >> v >> e;

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));

    int tplt_cnt = 0;
    for (int i = 1; i <= v; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            tplt_cnt++;
        }
    }

    int dinhtru = 0;
    for (int i = 1; i <= v; i++)
    {
        memset(visited, false, sizeof(visited));
        visited[i] = true;
        int tplt = 0;

        for (int j = 1; j <= v; j++)
        {
            if (!visited[j])
            {
                dfs(j);
                tplt++;
            }
        }
        if (tplt > tplt_cnt)
            ++dinhtru;
    }

    cout << dinhtru << endl;
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