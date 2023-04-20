#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

void run_case()
{
    int x, y, z;
    cin >> x >> y >> z;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    s1 = "0" + s1;
    s2 = "0" + s2;
    s3 = "0" + s3;

    int f[x + 1][y + 1][z + 1];
    memset(f, 0, sizeof(f));

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            for (int k = 1; k <= z; k++)
            {
                if (s1[i] == s2[j] && s1[i] == s3[k])
                {
                    f[i][j][k] = max({f[i - 1][j - 1][k - 1] + 1, f[i - 1][j][k], f[i][j - 1][k], f[i][j][k - 1]});
                }
                else
                {
                    f[i][j][k] = max({f[i - 1][j][k], f[i][j - 1][k], f[i][j][k - 1]});
                }
            }
        }
    }

    cout << f[x][y][z] << endl;
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