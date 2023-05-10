#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

string s, t;
set<string> lst;

bool isValid(string xnew, string x)
{
    int cnt = 0;
    for (int i = 0; i < x.size(); i++)
    {
        if (xnew[i] != x[i])
            cnt++;
        if (cnt > 1)
            return false;
    }

    return lst.count(xnew);
}

void bfs()
{
    queue<pair<string, int>> q;
    q.push({s, 1});

    while (q.size())
    {
        auto [x, cnt] = q.front();
        q.pop();

        // cout << x << endl;

        if (x == t)
        {
            cout << cnt << endl;
            return;
        }

        string xnew = x;
        for (int i = 0; i < xnew.size(); i++)
        {
            for (char c = 'A'; c <= 'Z'; c++)
            {
                xnew[i] = c;
                if (isValid(xnew, x))
                {
                    q.push({xnew, cnt + 1});
                    lst.erase(xnew);
                }
            }
            xnew[i] = x[i];
        }
    }

    cout << -1 << endl;
}

void run_case()
{
    lst.clear();

    int n;
    cin >> n >> s >> t;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        lst.insert(s);
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