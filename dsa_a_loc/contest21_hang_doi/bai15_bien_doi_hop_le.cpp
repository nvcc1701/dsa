#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e4 + 5;

bool prime[MAX];
string s, t;
set<string> se;

void sieve()
{
    memset(prime, true, sizeof(prime));

    prime[0] = prime[1] = false;

    for (int i = 2; i <= sqrt(MAX); i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= MAX; j += i)
                prime[j] = false;
        }
    }
}

bool check(string x)
{
    int n = stoi(x);

    if (prime[n] && !se.count(x))
    {
        return true;
    }
    return false;
}

void bfs()
{
    queue<pair<string, int>> q;
    q.push({s, 0});
    se.insert(s);

    while (q.size() > 0)
    {
        auto [x, y] = q.front();
        q.pop();

        if (x == t)
        {
            cout << y << endl;
            return;
        }

        string xnew = x;
        int ynew = y + 1;

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j <= 9; j++)
            {
                if (i == 0 && j == 0)
                    continue;
                xnew[i] = j + '0';
                if (check(xnew))
                {
                    q.push({xnew, ynew});
                    se.insert(xnew);
                }
            }
            xnew[i] = x[i];
        }
    }
}

void run_case()
{
    cin >> s >> t;
    se.clear();
    bfs();
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
    cin >> Test;
    sieve();
    for (int test = 1; test <= Test; test++)
    {
        run_case();
    }

    return 0;
}