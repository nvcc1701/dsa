#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ii = pair<int, int>;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

string s;

int countS()
{
    int n = s.size();
    s = "x" + s;
    int f[n + 1][n + 1];

    memset(f, 0, sizeof(f));
    for (int i = 1; i <= n; i++)
        f[i][i] = 1;

    for (int len = 2; len <= n; len++)
    {
        for (int i = 0; i <= n - len + 1; i++)
        {
            int j = i + len - 1;

            if (s[i] == s[j])
                f[i][j] = f[i + 1][j - 1] + 2;
            else
                f[i][j] = max(f[i + 1][j], f[i][j - 1]);
        }
    }

    return n - f[1][n];
}
void run_case()
{
    cin >> s;

    cout << countS() << endl;
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