#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 9;

int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

int a[MAX][MAX];
ii s, t;
bool used[MAX][MAX];

bool isValid(int x, int y)
{
    if (x >= 1 && x <= 8 && y >= 1 && y <= 8 && !used[x][y])
        return true;
    return false;
}

void bfs()
{
    queue<pair<ii, int>> q;
    q.push({s, 0});
    used[s.first][s.second] = true;

    while (q.size() > 0)
    {
        auto [top, cnt] = q.front();
        q.pop();

        if (top.first == t.first && top.second == t.second)
        {
            cout << cnt << endl;
            return;
        }

        auto [x, y] = top;
        for (int i = 0; i < 8; i++)
        {
            int xnew, ynew;
            xnew = x + dx[i];
            ynew = y + dy[i];
            if (isValid(xnew, ynew))
            {
                q.push({{xnew, ynew}, cnt + 1});
                used[xnew][ynew] = true;
            }
        }
    }

    cout << -1 << endl;
}

void run_case()
{
    string s1, s2;
    cin >> s1 >> s2;

    s.first = (s1[0] - 'a' + 1);
    s.second = (s1[1] - '0');

    t.first = (s2[0] - 'a' + 1);
    t.second = (s2[1] - '0');

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

// 5
// b2 c6
// h4 b3
// g1 b2
// e2 c3
// f6 b2