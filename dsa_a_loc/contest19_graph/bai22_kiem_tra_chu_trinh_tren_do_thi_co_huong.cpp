#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

set<int> ke[1001];
int color[1001];

bool dfs(int s)
{
    color[s] = 1;

    for (auto x : ke[s])
    {
        if (color[x] == 0)
        {
            if (dfs(x))
                return true;
        }
        else if (color[x] == 1)
        {
            return true; // co duong di tu x->s
        }
    }
    color[s] = 2;
    return false;
}

void run_case()
{
    int v, e;
    cin >> v >> e;

    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].insert(y);
    }

    memset(color, 0, sizeof(color));

    for (int i = 1; i <= v; i++)
    {
        if (color[i] == 0)
        {
            if (dfs(i))
            {
                cout << 1;
                return;
            }
        }
    }

    cout << 0;
    return;
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