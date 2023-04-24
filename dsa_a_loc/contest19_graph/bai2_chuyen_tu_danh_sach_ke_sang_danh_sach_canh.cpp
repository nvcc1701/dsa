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
    int n;
    cin >> n;
    cin.ignore();
    int a[n + 1][n + 1];
    memset(a, 0, sizeof(a));

    string s;
    for (int i = 1; i <= n; i++)
    {
        getline(cin, s);
        stringstream ss(s);
        while (ss >> s)
        {
            a[i][stoi(s)] = 1;
            a[stoi(s)][i] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j])
            {
                cout << i << " " << j << endl;
                a[j][i] = 0;
            }
        }
    }
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