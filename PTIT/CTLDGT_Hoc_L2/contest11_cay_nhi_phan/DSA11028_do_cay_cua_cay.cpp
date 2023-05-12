#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 100000 + 5;

int n;
vector<int> ke[MAX];

int res = 0;
void dfs(int u, int cnt)
{
    res = max(res, cnt);
    for (auto v : ke[u])
    {
        dfs(v, cnt + 1);
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
    }

    res = 0;
    dfs(1, 0);
    cout << res << endl;
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