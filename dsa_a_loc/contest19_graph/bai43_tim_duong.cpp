#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 501;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

int n, m;
char a[MAX][MAX];
bool used[MAX][MAX];

bool isValid(ii p)
{
    auto [x, y] = p;
    if (x >= 1 && x <= n && y >= 1 && y <= m && !used[x][y] && (a[x][y] == '.' || a[x][y] == 'T'))
        return true;
    return false;
}

bool ok = false;
void Try(ii p, int prev, int cnt)
{
    if (a[p.first][p.second] == 'T')
        ok = true;

    if (ok)
        return;

    used[p.first][p.second] = true;
    for (int i = 0; i < 4; i++)
    {
        int inew = p.first + dx[i];
        int jnew = p.second + dy[i];
        if (isValid({inew, jnew}))
        {
            if (prev == i)
                Try({inew, jnew}, i, cnt);
            else if (prev != i && cnt < 3)
                Try({inew, jnew}, i, cnt + 1);
        }
    }
    used[p.first][p.second] = false;
}

void run_case()
{
    cin >> n >> m;

    int si, sj;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'S')
                si = i, sj = j;
        }

    Try({si, sj}, -1, 0);

    if (ok)
        cout << "YES";
    else
        cout << "NO";
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