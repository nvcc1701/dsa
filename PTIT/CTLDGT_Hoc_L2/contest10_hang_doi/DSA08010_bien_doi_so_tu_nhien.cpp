#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

ll s, t;
set<ll> se;
bool used[MAX];

bool isValid(ll x)
{
    if (x > 0 && !se.count(x))
        return true;
    return false;
}

void bfs()
{
    queue<pair<ll, ll>> q;
    q.push({s, 0});
    se.insert(s);

    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();

        if (x == t)
        {
            cout << y << endl;
            return;
        }

        ll xnew, ynew = y + 1;

        xnew = x - 1;
        if (isValid(xnew))
        {
            q.push({xnew, ynew});
            se.insert(xnew);
        }

        for (ll i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                xnew = max(i, x / i);
                if (isValid(xnew))
                {
                    q.push({xnew, ynew});
                    se.insert(xnew);
                }
            }
        }
    }
}

void run_case()
{
    cin >> s;
    t = 1;
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