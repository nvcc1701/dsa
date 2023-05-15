#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e4 + 5;

string s, t;
int f[MAX][MAX];

void run_case()
{
    cin >> s >> t;
    int n = s.size(), m = t.size();
    s = "0" + s;
    t = "0" + t;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s[i] == t[j])
                f[i][j] = f[i - 1][j - 1] + 1;
            else
                f[i][j] = max({f[i - 1][j], f[i][j - 1]});
        }
    }

    string res;
    while (n > 0 && m > 0)
    {
        if (s[n] == t[m])
        {
            res += s[n];
            n--;
            m--;
        }
        else
        {
            if (f[n][m - 1] == f[n][m])
                m--;
            else if (f[n - 1][m] == f[n][m])
                n--;
        }
    }
    reverse(res.begin(), res.end());
    cout << res;
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