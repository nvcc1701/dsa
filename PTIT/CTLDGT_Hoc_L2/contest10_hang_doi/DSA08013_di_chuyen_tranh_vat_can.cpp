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

int n;
char a[MAX][MAX];
bool used[MAX][MAX];
int x, y, s, t;

bool isValid(int x, int y)
{
    if (x >= 0 && x < n && y >= 0 && y < n && !used[x][y] && a[x][y] !='X')
    {
        return true;
    }
    return false;
}

void bfs()
{
    queue<tuple<int, int, int, int>> q;
    q.push({x, y, -1, 0});
    used[x][y] = true;

    while (!q.empty())
    {
        auto [x, y, prev, cnt] = q.front();
        q.pop();

        if (x == s && y == t)
        {
            cout << cnt << endl;
            return;
        }

        int xnew, ynew;
        for (int k = 0; k < 4; k++)
        {
            xnew = x + dx[k];
            ynew = y + dy[k];

            if (isValid(xnew, ynew))
            {
                if (k == prev)
                    q.push({xnew, ynew, k, cnt});
                else
                    q.push({xnew, ynew, k, cnt + 1});
                used[xnew][ynew] = true;
            }
        }
    }
    cout << -1 << endl;
}

void run_case()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cin >> x >> y >> s >> t;

    memset(used, false, sizeof(used));
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