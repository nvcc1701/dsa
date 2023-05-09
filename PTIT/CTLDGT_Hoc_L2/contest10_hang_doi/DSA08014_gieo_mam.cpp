#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 100 + 5;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int n, m;
bool color[MAX][MAX];
set<ii> se;

bool isValid(int x, int y)
{
    int xnew, ynew;
    for (int k = 0; k < 4; k++)
    {
        xnew = x + dx[k];
        ynew = y + dy[k];
        if(xnew<=)
    }
}

void bfs()
{
    queue<ii> q;
    for (auto p : se)
        q.push(p);

    while (!q.empty())
    {
        auto [x, y] = q.front();
        color[x][y]++;
        if (color[x][y] == 2)
            se.insert({x, y});

        for (auto p : se)
        {
        }
    }
}

void run_case()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> color[i][j];
            if (color[i][j] == 2)
                se.insert({i, j});
        }

    bfs();
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