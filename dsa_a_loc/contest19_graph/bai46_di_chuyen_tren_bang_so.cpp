#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 500 + 5;

int n, m;
int a[MAX][MAX];
bool used[MAX][MAX];

int dx[] = {0, 0, 1, -1};
int dy[] = {-1, 1, 0, 0};

struct iii
{
    int w;
    int x;
    int y;
};

struct iii_greater
{
    bool operator()(const iii &a, const iii &b) const
    {
        return a.w > b.w;
    }
};

bool isValid(int x, int y)
{
    if (x >= 1 && x <= n && y >= 1 && y <= m && !used[x][y])
        return true;
    return false;
}

void dijkstra()
{
    priority_queue<iii, vector<iii>, iii_greater> pq;
    pq.push({0, 0, 0});

    // tao bang phuong an
    int d[MAX][MAX];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            d[i][j] = INF;
    d[0][0] = 0;

    while (!pq.empty())
    {
        iii top = pq.top();
        pq.pop();

        for (int k = 0; k < 4; k++)
        {
            int xnew = top.x + dx[k];
            int ynew = top.y + dy[k];

            if (d[xnew][ynew] < d[top.x][top.y] + top.w)
            {
                d[xnew][ynew] = d[top.x][top.y] + top.w;
                iii iiinew{d[xnew][ynew], xnew, ynew};
                pq.push(iiinew);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << d[i][j] << " ";
        cout << endl;
    }
}

void run_case()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    dijkstra();
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