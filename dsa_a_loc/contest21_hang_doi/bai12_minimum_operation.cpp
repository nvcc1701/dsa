#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int s, t;
bool used[MAX];

bool isValid(int x)
{
    if (x > 0 && x < MAX && used[x] == false)
        return true;
    return false;
}

void bfs()
{
    queue<ii> q;
    q.push({s, 0});
    used[s] = true;

    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();

        if (x == t)
        {
            cout << y << endl;
            return;
        }

        int xnew = x - 1, ynew = y + 1;
        if (isValid(xnew))
        {
            q.push({xnew, ynew});
            used[xnew] = true;
        }
        xnew = x * 2;
        if (isValid(xnew))
        {
            q.push({xnew, ynew});
            used[xnew] = true;
        }
    }
}

void run_case()
{
    cin >> s >> t;
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