#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

string s;
bool f[1001][1001];
int n;
void run_case()
{
    cin >> s;
    n = s.size();
    s = "0" + s;

    for (int i = 1; i <= n; i++) // co so qhd
        f[i][i] = true;

    // abcde = 5
    // 5-3 = 2+1 = 3

    int res = 1;
    for (int len = 2; len <= n; len++) // giong sliding window & duyet
    {
        for (int i = 1; i <= n - len + 1; i++)
        {
            int j = i + len - 1;

            if (len == 2 && s[i] == s[j]) // aa bb cc // another base
                f[i][j] = true;
            else // baab
            {
                if (f[i + 1][j - 1] && s[i] == s[j])
                    f[i][j] = true;
            }

            if (f[i][j])
                res = max(res, len);
        }
    }

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