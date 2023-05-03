#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

const ll LINF = 1e18 + 5;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 5;

int test(string s, int n)
{
    int M[100][100];
    memset(M, 0, sizeof(M));
    for (int i = 0; i < n; i++)
        M[i][i] = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j])
                M[i][j] += M[i + 1][j - 1] + 2;
            else
            {
                M[i][j] = max(M[i + 1][j], M[i][j - 1]);
            }
        }
    }
    return n - M[0][n - 1];
}

void run_case()
{
    string s;
    cin >> s;
    cout << test(s, s.length()) << endl;
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