#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    string s;
    cin >> s;
    int n = s.size();
    s = "x" + s;

    bool f[n + 1][n + 1];
    memset(f, 0, sizeof(f));
    for (int i = 1; i <= n; i++)
        f[i][i] = true;

    int res = 1;
    for (int len = 2; len <= n; len++)
    {
        for (int i = 1; i <= n - len + 1; i++)
        {
            int j = i + len - 1;
            if (len == 2 && s[i] == s[j])
                f[i][j] = true;
            else if (s[i] == s[j] && f[i + 1][j - 1])
                f[i][j] = true;

            if (f[i][j])
                res = max(res, len);
        }
    }

    cout << res << endl;
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