#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 30 + 5;

int dx[] = {0, 0, 1, -1, 0, 0};
int dy[] = {1, -1, 0, 0, 0, 0};
int dz[] = {0, 0, 0, 0, 1, -1};

char board[MAX][MAX][MAX];
bool used[MAX][MAX][MAX];
int a, b, c;
tuple<int, int, int> s;
tuple<int, int, int> t;

bool isValid(int x, int y, int z)
{
    return (x >= 0 && x < a && y >= 0 && y < b && z >= 0 && z < c && !used[x][y][z] && board[x][y][z] != '#');
}

void bfs()
{
    queue<tuple<int, int, int, int>> q;
    q.push({get<0>(s), get<1>(s), get<2>(s), 0});
    used[get<0>(s)][get<1>(s)][get<2>(s)] = true;

    while (q.size())
    {
        auto [x, y, z, cnt] = q.front();
        q.pop();

        if (x == get<0>(t) && y == get<1>(t) && z == get<2>(t))
        {
            cout << cnt << endl;
            return;
        }

        int xnew, ynew, znew;
        for (int k = 0; k < 6; k++)
        {
            xnew = x + dx[k];
            ynew = y + dy[k];
            znew = z + dz[k];

            if (isValid(xnew, ynew, znew))
            {
                q.push({xnew, ynew, znew, cnt + 1});
                used[xnew][ynew][znew] = true;
            }
        }
    }

    cout << -1 << endl;
}

void run_case()
{
    cin >> a >> b >> c;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                cin >> board[i][j][k];
                // cout << board[i][j][k];

                if (board[i][j][k] == 'S')
                {
                    get<0>(s) = i;
                    get<1>(s) = j;
                    get<2>(s) = k;
                }

                if (board[i][j][k] == 'E')
                {
                    get<0>(t) = i;
                    get<1>(t) = j;
                    get<2>(t) = k;
                }
            }
            // cout << endl;
        }
        // cout << endl;
    }

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