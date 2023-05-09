#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

string s1, s2;
set<string> se;

bool isValid(string x)
{
    if (se.count(x))
        return false;
    int n = stoi(x);

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void bfs()
{
    queue<pair<string, int>> q;
    q.push({s1, 0});
    se.insert(s1);

    while (!q.empty())
    {
        auto [top, cnt] = q.front();
        q.pop();

        if (top == s2)
        {
            cout << cnt << endl;
            return;
        }

        string xnew = top;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j <= 9; j++)
            {
                if (i == 0 && j == 0)
                    continue;

                xnew[i] = j + '0';

                if (isValid(xnew))
                {
                    q.push({xnew, cnt + 1});
                    se.insert(xnew);
                }
            }
            xnew[i] = top[i];
        }
    }
}

void run_case()
{
    cin >> s1 >> s2;
    se.clear();
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